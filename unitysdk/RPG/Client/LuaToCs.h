#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LUATOCS_FULLGC_OFFSET UNITYSDK_OFFSET(0x15BF8ED0)
#define RPG_CLIENT_LUATOCS_GETISDOWNLOADALLTXTLANG_OFFSET UNITYSDK_OFFSET(0x15BF9660)
#define RPG_CLIENT_LUATOCS_GETISUSEINTERIORNETDISKDOWNLOADASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x15BF95A0)
#define RPG_CLIENT_LUATOCS_GETLUAMEMROY_OFFSET UNITYSDK_OFFSET(0x15BF9060)
#define RPG_CLIENT_LUATOCS_INSTANTIATE_1_OFFSET UNITYSDK_OFFSET(0x15BF94A0)
#define RPG_CLIENT_LUATOCS_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x15BF9440)
#define RPG_CLIENT_LUATOCS_ISSAMETYPE_OFFSET UNITYSDK_OFFSET(0x15BF98A0)
#define RPG_CLIENT_LUATOCS_LOAD_OFFSET UNITYSDK_OFFSET(0x15BF9840)
#define RPG_CLIENT_LUATOCS_MEMORYLEAKCHECK_OFFSET UNITYSDK_OFFSET(0x15BF92B0)
#define RPG_CLIENT_LUATOCS_MEMORYLEAKREPORT_OFFSET UNITYSDK_OFFSET(0x15BF9370)
#define RPG_CLIENT_LUATOCS_PLAYAUDIO_OFFSET UNITYSDK_OFFSET(0x15BF9750)
#define RPG_CLIENT_LUATOCS_PLAYVIDEO_OFFSET UNITYSDK_OFFSET(0x15BF96A0)
#define RPG_CLIENT_LUATOCS_SETDOWNLOADALLTXTLANG_OFFSET UNITYSDK_OFFSET(0x15BF9620)
#define RPG_CLIENT_LUATOCS_SETISUSEINTERIORNETDISKDOWNLOADASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x15BF9560)
#define RPG_CLIENT_LUATOCS_SETUSELOCAL_OFFSET UNITYSDK_OFFSET(0x15BF95E0)
#define RPG_CLIENT_LUATOCS_STARTMEMORYLEAKCHECK_OFFSET UNITYSDK_OFFSET(0x15BF91F0)
#define RPG_CLIENT_LUATOCS_TRYONLYONCEINITPROFILE_OFFSET UNITYSDK_OFFSET(0x15BF94F0)

namespace RPG::Client
{
	inline static constexpr unsigned int LuaToCs_TypeDefinitionIndex = 56782;

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

		static ::System::Void MemoryLeakReport(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_MEMORYLEAKREPORT_OFFSET))(a1);
		}

		static ::UnityEngine::Object* Instantiate(::UnityEngine::Object* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_INSTANTIATE_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Object* Instantiate_1(::UnityEngine::Object* a1)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_INSTANTIATE_1_OFFSET))(a1);
		}

		static ::System::Void TryOnlyOnceInitProfile()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_TRYONLYONCEINITPROFILE_OFFSET))();
		}

		static ::System::Void SetIsUseInteriorNetdiskDownloadAssetBundle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_SETISUSEINTERIORNETDISKDOWNLOADASSETBUNDLE_OFFSET))(a1);
		}

		static ::System::Boolean GetIsUseInteriorNetdiskDownloadAssetBundle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_GETISUSEINTERIORNETDISKDOWNLOADASSETBUNDLE_OFFSET))();
		}

		static ::System::Void SetUseLocal(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_SETUSELOCAL_OFFSET))(a1);
		}

		static ::System::Void SetDownloadAllTxtLang(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_SETDOWNLOADALLTXTLANG_OFFSET))(a1);
		}

		static ::System::Boolean GetIsDownloadAllTxtLang()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_GETISDOWNLOADALLTXTLANG_OFFSET))();
		}

		static ::System::Void PlayVideo(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_PLAYVIDEO_OFFSET))(a1);
		}

		static ::System::Void PlayAudio(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_PLAYAUDIO_OFFSET))(a1);
		}

		static ::UnityEngine::Object* Load(::System::String* a1, ::System::Type* a2)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_LOAD_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsSameType(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUATOCS_ISSAMETYPE_OFFSET))(a1, a2);
		}
	};
}
