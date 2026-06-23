#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_EMOTIONTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x19FF51A0)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19FF4B50)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19FF4B40)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19FF4ED0)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19FF4CC0)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_GETEMOTIONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x19FF5470)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19FF4C50)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_GETNPCID_OFFSET UNITYSDK_OFFSET(0x19FF53C0)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19FF4F60)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19FF4D40)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x19FF5220)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19FF4FC0)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19FF4D70)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF5560)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EmotionTrait_TypeDefinitionIndex = 49837;

	class EmotionTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::EmotionTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::EmotionTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::EmotionTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::EmotionTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		static ::System::Int32 GetNpcID(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Int32(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_GETNPCID_OFFSET))(entityHandle);
		}

		static ::Foundation::AssetPath GetEmotionConfigPath(::System::Int32 npcID)
		{
			return ((::Foundation::AssetPath(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_GETEMOTIONCONFIGPATH_OFFSET))(npcID);
		}
	};
}
