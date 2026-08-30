#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_A8047719FD27C507_METHOD_3_660F257C3D2E4349_OFFSET UNITYSDK_OFFSET(0x1CEB3320)
#define CLASS_3_A8047719FD27C507_METHOD_3_B0676F272208923C_OFFSET UNITYSDK_OFFSET(0x1CEB3360)
#define CLASS_3_A8047719FD27C507__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEB3350)

inline static constexpr unsigned int Class_3_A8047719FD27C507_TypeDefinitionIndex = 19688;

class Class_3_A8047719FD27C507 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* OFJMFAAEMAD; // 0x18
	::System::String* KKJHBCAHFAO; // 0x20
	::System::Boolean FKDDKHGMEAM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8047719FD27C507__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_660F257C3D2E4349(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A8047719FD27C507*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A8047719FD27C507*&))((::PBYTE)hIl2Cpp + CLASS_3_A8047719FD27C507_METHOD_3_660F257C3D2E4349_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B0676F272208923C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A8047719FD27C507* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A8047719FD27C507*))((::PBYTE)hIl2Cpp + CLASS_3_A8047719FD27C507_METHOD_3_B0676F272208923C_OFFSET))(a1, a2);
	}
};
