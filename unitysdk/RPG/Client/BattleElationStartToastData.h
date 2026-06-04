#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CDF807379B3F27B3;
class Class_1_E08DCD252AEE7AEA;
namespace System { class String; }

#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB3D8B20)
#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GETAUDIOEVENTNAME_OFFSET UNITYSDK_OFFSET(0xB3D9050)
#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GETPREFABPATH_OFFSET UNITYSDK_OFFSET(0xB3D8DC0)
#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GET_POINTNUM_OFFSET UNITYSDK_OFFSET(0xB3D8F90)
#define RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB3D8CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleElationStartToastData_TypeDefinitionIndex = 67411;

	class BattleElationStartToastData : public ::System::Object
	{
	public:
		::Class_1_E08DCD252AEE7AEA* _LevelSetting; // 0x10
		::Il2CppArray<::System::String*>* _FastAudioEventNames; // 0x18
		::Class_1_CDF807379B3F27B3* _ElationPointManager; // 0x20
		::Il2CppArray<::System::String*>* _AudioEventNames; // 0x28
		::Il2CppArray<::System::String*>* _PrefabPaths; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleElationStartToastData* Create()
		{
			return ((::RPG::Client::BattleElationStartToastData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_CREATE_OFFSET))();
		}

		::System::String* GetPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GETPREFABPATH_OFFSET))(this);
		}

		::System::String* GetAudioEventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GETAUDIOEVENTNAME_OFFSET))(this);
		}

		::System::Int32 get_PointNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONSTARTTOASTDATA_GET_POINTNUM_OFFSET))(this);
		}
	};
}
