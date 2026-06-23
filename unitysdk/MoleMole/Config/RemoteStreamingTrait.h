#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x170C7F00)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x170C8060)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x170C7EF0)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170C87D0)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x170C8190)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x170C8E00)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x170C7FF0)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x170C8830)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x170C8210)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x170C8C60)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x170C8690)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x170C8EB0)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x170C8EC0)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x170C8ED0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RemoteStreamingTrait_TypeDefinitionIndex = 80084;

	class RemoteStreamingTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean IsAutoStreaming; // 0x18
		::System::Int32 GroupID; // 0x1C
		::System::Int32 ConfigID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::RemoteStreamingTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::RemoteStreamingTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::RemoteStreamingTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::RemoteStreamingTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
