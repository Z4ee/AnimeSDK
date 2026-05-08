#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_17B78A87EAE1DCED.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

class NapGradient;
namespace MoleMole::Config { class ConfigShaderCustomBase; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_249FA32D7067822D_OFFSET UNITYSDK_OFFSET(0x16031B90)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_37285E3083F6D690_OFFSET UNITYSDK_OFFSET(0x16032220)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_49AC00594530B714_1_OFFSET UNITYSDK_OFFSET(0x16032350)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_49AC00594530B714_OFFSET UNITYSDK_OFFSET(0x16031990)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_5BBD93948C2F2F16_OFFSET UNITYSDK_OFFSET(0x16031CE0)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_63E7CA2473DB5E8B_OFFSET UNITYSDK_OFFSET(0x16031AA0)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_6FF3E514220A5943_OFFSET UNITYSDK_OFFSET(0x16031A50)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_A2FA6C3F3F699E32_OFFSET UNITYSDK_OFFSET(0x160323E0)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x16031F90)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_CA16E66277F3799C_OFFSET UNITYSDK_OFFSET(0x160319E0)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x160327E0)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x16031AE0)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_DEC74973168460AA_OFFSET UNITYSDK_OFFSET(0x16031E60)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_E88782EA1EE9EB39_OFFSET UNITYSDK_OFFSET(0x16032060)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16031B20)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESShaderCustomBehavior_TypeDefinitionIndex = 46122;

	class ESShaderCustomBehavior : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		// static const ::System::String* SHADER_CUSTOM_ASSET_FOLDER_PATH; // 0x0
		// static const ::System::String* SHADER_CUSTOM_TEMP_SELECT_SPLIT_CHAR; // 0x0
		// static const ::System::String* BASE_GROUP_NAME; // 0x0
		::System::String* _tempSelect; // 0x58
		::System::Int32 priority; // 0x60
		::System::Boolean ignoreWorldTimescale; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR__CTOR_OFFSET))(this);
		}

		::Enum_3_17B78A87EAE1DCED Method_3_49AC00594530B714()
		{
			return ((::Enum_3_17B78A87EAE1DCED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_49AC00594530B714_OFFSET))(this);
		}

		::MoleMole::Config::ConfigShaderCustomBase* Method_3_CA16E66277F3799C(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::MoleMole::Config::ConfigShaderCustomBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_CA16E66277F3799C_OFFSET))(this, a1, a2, a3, a4);
		}

		::MoleMole::Config::ConfigShaderCustomBase* Method_3_6FF3E514220A5943(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigShaderCustomBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_6FF3E514220A5943_OFFSET))(this, a1);
		}

		::MoleMole::Config::ShaderCustomType Method_3_63E7CA2473DB5E8B()
		{
			return ((::MoleMole::Config::ShaderCustomType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_63E7CA2473DB5E8B_OFFSET))(this);
		}

		::System::String* Method_3_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* Method_3_249FA32D7067822D(::MoleMole::EffectSimulate::FloatKeyframeCurve* a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::MoleMole::EffectSimulate::FloatKeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_249FA32D7067822D_OFFSET))(this, a1);
		}

		::NapGradient* Method_3_5BBD93948C2F2F16(::MoleMole::EffectSimulate::ColorKeyframeCurve* a1)
		{
			return ((::NapGradient*(*)(::PVOID, ::MoleMole::EffectSimulate::ColorKeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_5BBD93948C2F2F16_OFFSET))(this, a1);
		}

		::MoleMole::EffectSimulate::ColorKeyframeCurve* Method_3_DEC74973168460AA(::NapGradient* a1)
		{
			return ((::MoleMole::EffectSimulate::ColorKeyframeCurve*(*)(::PVOID, ::NapGradient*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_DEC74973168460AA_OFFSET))(this, a1);
		}

		static ::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_3_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_B747781924F4C9A5_OFFSET))();
		}

		::System::Void Method_3_E88782EA1EE9EB39(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_E88782EA1EE9EB39_OFFSET))(this, a1, a2, a3, a4);
		}

		::MoleMole::EffectSimulate::FloatKeyframeCurve* Method_3_37285E3083F6D690(::UnityEngine::AnimationCurve* a1)
		{
			return ((::MoleMole::EffectSimulate::FloatKeyframeCurve*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_37285E3083F6D690_OFFSET))(this, a1);
		}

		::Enum_3_17B78A87EAE1DCED Method_3_49AC00594530B714_1()
		{
			return ((::Enum_3_17B78A87EAE1DCED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_49AC00594530B714_1_OFFSET))(this);
		}

		::System::Void Method_3_A2FA6C3F3F699E32(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_A2FA6C3F3F699E32_OFFSET))(this, a1);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
