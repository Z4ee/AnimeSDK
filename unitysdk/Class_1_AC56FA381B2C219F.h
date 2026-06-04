#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_684;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AC56FA381B2C219F_METHOD_1_A283C310E5329BBF_OFFSET UNITYSDK_OFFSET(0x1354E240)
#define CLASS_1_AC56FA381B2C219F_METHOD_1_C83BDB0709FDFFD1_OFFSET UNITYSDK_OFFSET(0x1354E330)
#define CLASS_1_AC56FA381B2C219F__CTOR_OFFSET UNITYSDK_OFFSET(0x1354E540)

inline static constexpr unsigned int Class_1_AC56FA381B2C219F_TypeDefinitionIndex = 58500;

class Class_1_AC56FA381B2C219F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_684*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC56FA381B2C219F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A283C310E5329BBF(::Il2CppArray<::Class_0_16E4307DCC419505_684*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_684*>*))((::PBYTE)hIl2Cpp + CLASS_1_AC56FA381B2C219F_METHOD_1_A283C310E5329BBF_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_C83BDB0709FDFFD1(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_AC56FA381B2C219F_METHOD_1_C83BDB0709FDFFD1_OFFSET))(this, a1);
	}
};
