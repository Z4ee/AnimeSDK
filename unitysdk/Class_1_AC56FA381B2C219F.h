#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_719;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AC56FA381B2C219F_METHOD_1_A283C310E5329BBF_OFFSET UNITYSDK_OFFSET(0x17E88630)
#define CLASS_1_AC56FA381B2C219F_METHOD_1_A8FB362C5C09DA77_OFFSET UNITYSDK_OFFSET(0x17E88720)
#define CLASS_1_AC56FA381B2C219F__CTOR_OFFSET UNITYSDK_OFFSET(0x17E88990)

inline static constexpr unsigned int Class_1_AC56FA381B2C219F_TypeDefinitionIndex = 59771;

class Class_1_AC56FA381B2C219F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_719*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC56FA381B2C219F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A283C310E5329BBF(::Il2CppArray<::Class_0_16E4307DCC419505_719*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_719*>*))((::PBYTE)hIl2Cpp + CLASS_1_AC56FA381B2C219F_METHOD_1_A283C310E5329BBF_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_A8FB362C5C09DA77(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_AC56FA381B2C219F_METHOD_1_A8FB362C5C09DA77_OFFSET))(this, a1);
	}
};
