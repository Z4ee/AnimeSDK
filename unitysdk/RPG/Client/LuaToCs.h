#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LUATOCS_FULLGC_OFFSET UNITYSDK_OFFSET(0xA7269A0)
#define RPG_CLIENT_LUATOCS_GETISUSEINTERIORNETDISKDOWNLOADASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0xA727080)
#define RPG_CLIENT_LUATOCS_GETLUAMEMROY_OFFSET UNITYSDK_OFFSET(0xA726B30)
#define RPG_CLIENT_LUATOCS_INSTANTIATE_1_OFFSET UNITYSDK_OFFSET(0xA726F80)
#define RPG_CLIENT_LUATOCS_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0xA726F20)
#define RPG_CLIENT_LUATOCS_ISSAMETYPE_OFFSET UNITYSDK_OFFSET(0xA727300)
#define RPG_CLIENT_LUATOCS_LOAD_OFFSET UNITYSDK_OFFSET(0xA7272A0)
#define RPG_CLIENT_LUATOCS_MEMORYLEAKCHECK_OFFSET UNITYSDK_OFFSET(0xA726D80)
#define RPG_CLIENT_LUATOCS_MEMORYLEAKREPORT_OFFSET UNITYSDK_OFFSET(0xA726E50)
#define RPG_CLIENT_LUATOCS_PLAYAUDIO_OFFSET UNITYSDK_OFFSET(0xA7271B0)
#define RPG_CLIENT_LUATOCS_PLAYVIDEO_OFFSET UNITYSDK_OFFSET(0xA727100)
#define RPG_CLIENT_LUATOCS_SETISUSEINTERIORNETDISKDOWNLOADASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0xA727040)
#define RPG_CLIENT_LUATOCS_SETUSELOCAL_OFFSET UNITYSDK_OFFSET(0xA7270C0)
#define RPG_CLIENT_LUATOCS_STARTMEMORYLEAKCHECK_OFFSET UNITYSDK_OFFSET(0xA726CC0)
#define RPG_CLIENT_LUATOCS_TRYONLYONCEINITPROFILE_OFFSET UNITYSDK_OFFSET(0xA726FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int LuaToCs_TypeDefinitionIndex = 54818;

	class LuaToCs : public ::System::Object
	{
	public:
		static ::System::Void FullGc()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_FULLGC_OFFSET))();
		}

		static ::System::Int32 GetLuaMemroy()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_GETLUAMEMROY_OFFSET))();
		}

		static ::System::Void StartMemoryLeakCheck()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_STARTMEMORYLEAKCHECK_OFFSET))();
		}

		static ::System::Void MemoryLeakCheck()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_MEMORYLEAKCHECK_OFFSET))();
		}

		static ::System::Void MemoryLeakReport(::System::Int32 level)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_MEMORYLEAKREPORT_OFFSET))(level);
		}

		static ::UnityEngine::Object* Instantiate(::UnityEngine::Object* original, ::UnityEngine::Transform* parent, ::System::Boolean instantiateInWorldSpace)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_INSTANTIATE_OFFSET))(original, parent, instantiateInWorldSpace);
		}

		static ::UnityEngine::Object* Instantiate_1(::UnityEngine::Object* original)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_INSTANTIATE_1_OFFSET))(original);
		}

		static ::System::Void TryOnlyOnceInitProfile()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_TRYONLYONCEINITPROFILE_OFFSET))();
		}

		static ::System::Void SetIsUseInteriorNetdiskDownloadAssetBundle(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_SETISUSEINTERIORNETDISKDOWNLOADASSETBUNDLE_OFFSET))(value);
		}

		static ::System::Boolean GetIsUseInteriorNetdiskDownloadAssetBundle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_GETISUSEINTERIORNETDISKDOWNLOADASSETBUNDLE_OFFSET))();
		}

		static ::System::Void SetUseLocal(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_SETUSELOCAL_OFFSET))(value);
		}

		static ::System::Void PlayVideo(::System::String* filePath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_PLAYVIDEO_OFFSET))(filePath);
		}

		static ::System::Void PlayAudio(::System::String* eventId)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_PLAYAUDIO_OFFSET))(eventId);
		}

		static ::UnityEngine::Object* Load(::System::String* path, ::System::Type* systemTypeInstance)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_LOAD_OFFSET))(path, systemTypeInstance);
		}

		static ::System::Boolean IsSameType(::System::Type* type1, ::System::Type* type2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_ISSAMETYPE_OFFSET))(type1, type2);
		}
	};
}
