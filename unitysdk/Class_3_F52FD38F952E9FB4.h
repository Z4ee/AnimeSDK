#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityShadowsMidtonesHighlightsEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class ShadowsMidtonesHighlights; }

#define CLASS_3_F52FD38F952E9FB4_METHOD_3_0FA1A0EE18EEF7E1_OFFSET UNITYSDK_OFFSET(0x17EE06D0)
#define CLASS_3_F52FD38F952E9FB4_METHOD_3_2C83BC13E38E29D5_OFFSET UNITYSDK_OFFSET(0x17EE16C0)
#define CLASS_3_F52FD38F952E9FB4_METHOD_3_A5118F53CF34A55D_OFFSET UNITYSDK_OFFSET(0x17EDDCA0)
#define CLASS_3_F52FD38F952E9FB4_METHOD_3_B945F8D0539294C6_OFFSET UNITYSDK_OFFSET(0x17EDE720)
#define CLASS_3_F52FD38F952E9FB4_METHOD_3_B98AE73A474249F9_OFFSET UNITYSDK_OFFSET(0x17EDC890)
#define CLASS_3_F52FD38F952E9FB4_METHOD_3_EBF5764FDFA1E982_OFFSET UNITYSDK_OFFSET(0x17EDF670)
#define CLASS_3_F52FD38F952E9FB4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17EE1E30)
#define CLASS_3_F52FD38F952E9FB4__CTOR_OFFSET UNITYSDK_OFFSET(0x17EDC6E0)

inline static constexpr unsigned int Class_3_F52FD38F952E9FB4_TypeDefinitionIndex = 83306;

class Class_3_F52FD38F952E9FB4 : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*, ::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_9; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_7; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_15; // 0xB8
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_1; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_5; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_11; // 0xD0
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_3; // 0xD8
	::System::Single Field_3_8; // 0xE0
	::System::Single Field_3_10; // 0xE4
	::UnityEngine::Vector4 Field_3_2; // 0xE8
	::System::Single Field_3_14; // 0xF8
	::UnityEngine::Vector4 Field_3_6; // 0xFC
	::System::Single Field_3_4; // 0x10C
	::UnityEngine::Vector4 Field_3_0; // 0x110

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_F52FD38F952E9FB4__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_B98AE73A474249F9(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*))((::PBYTE)hIl2Cpp + CLASS_3_F52FD38F952E9FB4_METHOD_3_B98AE73A474249F9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A5118F53CF34A55D(::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F52FD38F952E9FB4_METHOD_3_A5118F53CF34A55D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B945F8D0539294C6(::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F52FD38F952E9FB4_METHOD_3_B945F8D0539294C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_EBF5764FDFA1E982(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*))((::PBYTE)hIl2Cpp + CLASS_3_F52FD38F952E9FB4_METHOD_3_EBF5764FDFA1E982_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0FA1A0EE18EEF7E1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F52FD38F952E9FB4_METHOD_3_0FA1A0EE18EEF7E1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_2C83BC13E38E29D5(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F52FD38F952E9FB4_METHOD_3_2C83BC13E38E29D5_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F52FD38F952E9FB4_TOSTRING_OFFSET))(this);
	}
};
