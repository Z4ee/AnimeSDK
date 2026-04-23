#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_663;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E2C7519622F2C258_METHOD_1_7A05A0A7B3B77FDA_OFFSET UNITYSDK_OFFSET(0x963F720)
#define CLASS_1_E2C7519622F2C258_METHOD_1_F1FD9D7B05F35A11_OFFSET UNITYSDK_OFFSET(0x963F810)
#define CLASS_1_E2C7519622F2C258__CTOR_OFFSET UNITYSDK_OFFSET(0x963FA10)

inline static constexpr unsigned int Class_1_E2C7519622F2C258_TypeDefinitionIndex = 57710;

class Class_1_E2C7519622F2C258 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_663*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2C7519622F2C258__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7A05A0A7B3B77FDA(::Il2CppArray<::Class_0_16E4307DCC419505_663*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_663*>*))((::PBYTE)hIl2Cpp + CLASS_1_E2C7519622F2C258_METHOD_1_7A05A0A7B3B77FDA_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_F1FD9D7B05F35A11(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_E2C7519622F2C258_METHOD_1_F1FD9D7B05F35A11_OFFSET))(this, a1);
	}
};
