#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LUATOCS_FULLGC_OFFSET UNITYSDK_OFFSET(0x9A78C60)
#define RPG_CLIENT_LUATOCS_GETISUSEINTERIORNETDISKDOWNLOADASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x9A79340)
#define RPG_CLIENT_LUATOCS_GETLUAMEMROY_OFFSET UNITYSDK_OFFSET(0x9A78DF0)
#define RPG_CLIENT_LUATOCS_INSTANTIATE_1_OFFSET UNITYSDK_OFFSET(0x9A79240)
#define RPG_CLIENT_LUATOCS_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x9A791E0)
#define RPG_CLIENT_LUATOCS_ISSAMETYPE_OFFSET UNITYSDK_OFFSET(0x9A795C0)
#define RPG_CLIENT_LUATOCS_LOAD_OFFSET UNITYSDK_OFFSET(0x9A79560)
#define RPG_CLIENT_LUATOCS_MEMORYLEAKCHECK_OFFSET UNITYSDK_OFFSET(0x9A79040)
#define RPG_CLIENT_LUATOCS_MEMORYLEAKREPORT_OFFSET UNITYSDK_OFFSET(0x9A79110)
#define RPG_CLIENT_LUATOCS_PLAYAUDIO_OFFSET UNITYSDK_OFFSET(0x9A79470)
#define RPG_CLIENT_LUATOCS_PLAYVIDEO_OFFSET UNITYSDK_OFFSET(0x9A793C0)
#define RPG_CLIENT_LUATOCS_SETISUSEINTERIORNETDISKDOWNLOADASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x9A79300)
#define RPG_CLIENT_LUATOCS_SETUSELOCAL_OFFSET UNITYSDK_OFFSET(0x9A79380)
#define RPG_CLIENT_LUATOCS_STARTMEMORYLEAKCHECK_OFFSET UNITYSDK_OFFSET(0x9A78F80)
#define RPG_CLIENT_LUATOCS_TRYONLYONCEINITPROFILE_OFFSET UNITYSDK_OFFSET(0x9A79290)

namespace RPG::Client
{
	inline static constexpr unsigned int LuaToCs_TypeDefinitionIndex = 48073;

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
