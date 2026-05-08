#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CharacterCameraDitheringData.h"
#include "unitysdk/MoleMole/Config/CameraDitherLayerData.h"
#include "unitysdk/MoleMole/Config/CharacterFadeDitheringDataV2.h"
#include "unitysdk/MoleMole/Config/LocalAvatarElevationRatioDitheringData.h"
#include "unitysdk/MoleMole/Config/SceneObjDitherData.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CommonDitherConfigs; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_51D0AC0E0849A7FC_METHOD_1_20B279F0AC3CB7CC_OFFSET UNITYSDK_OFFSET(0x143B4740)
#define CLASS_1_51D0AC0E0849A7FC_METHOD_1_219F1F5DDAFC086C_OFFSET UNITYSDK_OFFSET(0x143B4050)
#define CLASS_1_51D0AC0E0849A7FC_METHOD_1_41EC8E0AD6EE8093_OFFSET UNITYSDK_OFFSET(0x143B3DC0)
#define CLASS_1_51D0AC0E0849A7FC_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x143B3B20)
#define CLASS_1_51D0AC0E0849A7FC_METHOD_1_4E76A52DA2FCC7DE_OFFSET UNITYSDK_OFFSET(0x143B4210)
#define CLASS_1_51D0AC0E0849A7FC_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x143B3A30)
#define CLASS_1_51D0AC0E0849A7FC_METHOD_1_6B5EA38BAE5646C2_OFFSET UNITYSDK_OFFSET(0x143B3630)
#define CLASS_1_51D0AC0E0849A7FC_METHOD_1_748F02DDF83ECA2D_OFFSET UNITYSDK_OFFSET(0x143B37D0)
#define CLASS_1_51D0AC0E0849A7FC_METHOD_1_8D18BF1DE66FCBE6_OFFSET UNITYSDK_OFFSET(0x143B3D40)
#define CLASS_1_51D0AC0E0849A7FC_METHOD_1_8FE6DCBAC0314093_OFFSET UNITYSDK_OFFSET(0x143B43F0)
#define CLASS_1_51D0AC0E0849A7FC_METHOD_1_D752AD5D4AC35801_OFFSET UNITYSDK_OFFSET(0x143B3E90)
#define CLASS_1_51D0AC0E0849A7FC__CCTOR_OFFSET UNITYSDK_OFFSET(0x143B3620)

inline static constexpr unsigned int Class_1_51D0AC0E0849A7FC_TypeDefinitionIndex = 74673;

class Class_1_51D0AC0E0849A7FC : public ::System::Object
{
public:
	static ::MoleMole::Config::CommonDitherConfigs** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::CommonDitherConfigs**)Il2CppClass::FromTypeDefinitionIndex(Class_1_51D0AC0E0849A7FC_TypeDefinitionIndex)->GetStaticField(0x42CC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_51D0AC0E0849A7FC__CCTOR_OFFSET))();
	}

	static ::System::Single Method_1_6B5EA38BAE5646C2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_51D0AC0E0849A7FC_METHOD_1_6B5EA38BAE5646C2_OFFSET))();
	}

	static ::MoleMole::Config::CameraDitherLayerData Method_1_748F02DDF83ECA2D(::System::String* a1)
	{
		return ((::MoleMole::Config::CameraDitherLayerData(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_51D0AC0E0849A7FC_METHOD_1_748F02DDF83ECA2D_OFFSET))(a1);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_51D0AC0E0849A7FC_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_8D18BF1DE66FCBE6(::UnityEngine::AnimationCurve*& a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::AnimationCurve*&))((::PBYTE)hIl2Cpp + CLASS_1_51D0AC0E0849A7FC_METHOD_1_8D18BF1DE66FCBE6_OFFSET))(a1);
	}

	static ::MoleMole::Config::SceneObjDitherData Method_1_D752AD5D4AC35801()
	{
		return ((::MoleMole::Config::SceneObjDitherData(*)())((::PBYTE)hIl2Cpp + CLASS_1_51D0AC0E0849A7FC_METHOD_1_D752AD5D4AC35801_OFFSET))();
	}

	static ::System::Boolean Method_1_41EC8E0AD6EE8093()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_51D0AC0E0849A7FC_METHOD_1_41EC8E0AD6EE8093_OFFSET))();
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_51D0AC0E0849A7FC_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::LocalAvatarElevationRatioDitheringData Method_1_219F1F5DDAFC086C()
	{
		return ((::MoleMole::Config::LocalAvatarElevationRatioDitheringData(*)())((::PBYTE)hIl2Cpp + CLASS_1_51D0AC0E0849A7FC_METHOD_1_219F1F5DDAFC086C_OFFSET))();
	}

	static ::System::Boolean Method_1_4E76A52DA2FCC7DE(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_51D0AC0E0849A7FC_METHOD_1_4E76A52DA2FCC7DE_OFFSET))(a1);
	}

	static ::MoleMole::CharacterCameraDitheringData Method_1_8FE6DCBAC0314093(::System::String* a1)
	{
		return ((::MoleMole::CharacterCameraDitheringData(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_51D0AC0E0849A7FC_METHOD_1_8FE6DCBAC0314093_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_20B279F0AC3CB7CC(::System::String* a1, ::MoleMole::Config::CharacterFadeDitheringDataV2& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::CharacterFadeDitheringDataV2&))((::PBYTE)hIl2Cpp + CLASS_1_51D0AC0E0849A7FC_METHOD_1_20B279F0AC3CB7CC_OFFSET))(a1, a2);
	}
};
