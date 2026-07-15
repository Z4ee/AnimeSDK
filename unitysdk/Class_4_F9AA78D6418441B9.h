#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CRPVirtualCameraTargetConfig; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_F9AA78D6418441B9_METHOD_4_61ACBD6DF6FE15E4_OFFSET UNITYSDK_OFFSET(0x1ACBD980)
#define CLASS_4_F9AA78D6418441B9_METHOD_4_BD2A52F6D1A8E3D0_OFFSET UNITYSDK_OFFSET(0x1ACBED50)
#define CLASS_4_F9AA78D6418441B9_METHOD_4_BEF80FB83E1A1534_OFFSET UNITYSDK_OFFSET(0x1ACBECE0)
#define CLASS_4_F9AA78D6418441B9_METHOD_4_C616402C1FF54AE8_OFFSET UNITYSDK_OFFSET(0x1ACBDA40)
#define CLASS_4_F9AA78D6418441B9__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACBD9F0)

inline static constexpr unsigned int Class_4_F9AA78D6418441B9_TypeDefinitionIndex = 22069;

class Class_4_F9AA78D6418441B9 : public ::RPG::GameCore::TriggerEffect
{
public:
	::RPG::GameCore::CRPVirtualCameraTargetConfig* Field_4_0; // 0x158
	::RPG::GameCore::CRPVirtualCameraTargetConfig* Field_4_1; // 0x160
	::RPG::GameCore::CRPVirtualCameraTargetConfig* Field_4_2; // 0x168
	::RPG::GameCore::CRPVirtualCameraTargetConfig* Field_4_3; // 0x170
	::RPG::GameCore::CRPVirtualCameraTargetConfig* Field_4_4; // 0x178
	::System::Single Field_4_5; // 0x180

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F9AA78D6418441B9__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_61ACBD6DF6FE15E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_F9AA78D6418441B9*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_F9AA78D6418441B9*&))((::PBYTE)hIl2Cpp + CLASS_4_F9AA78D6418441B9_METHOD_4_61ACBD6DF6FE15E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C616402C1FF54AE8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_F9AA78D6418441B9* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_F9AA78D6418441B9*))((::PBYTE)hIl2Cpp + CLASS_4_F9AA78D6418441B9_METHOD_4_C616402C1FF54AE8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_BEF80FB83E1A1534(::SimpleJSON::JSONNode* a1, ::Class_4_F9AA78D6418441B9*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_F9AA78D6418441B9*&))((::PBYTE)hIl2Cpp + CLASS_4_F9AA78D6418441B9_METHOD_4_BEF80FB83E1A1534_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_BD2A52F6D1A8E3D0(::SimpleJSON::JSONNode* a1, ::Class_4_F9AA78D6418441B9* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_F9AA78D6418441B9*))((::PBYTE)hIl2Cpp + CLASS_4_F9AA78D6418441B9_METHOD_4_BD2A52F6D1A8E3D0_OFFSET))(a1, a2);
	}
};
