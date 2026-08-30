#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class RPGProfilerMarkerWithIntData; }
namespace RPG::Client { class RPGProfilerMarkerWithObject; }
namespace RPG::Client { class RPGProfilerMarkerWithStringData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_RPGPROFILERMARKERUTILITY_GETMARKERWITHINTDATA_OFFSET UNITYSDK_OFFSET(0x1EF921A0)
#define RPG_CLIENT_RPGPROFILERMARKERUTILITY_GETMARKERWITHOBJECT_OFFSET UNITYSDK_OFFSET(0x1EF921C0)
#define RPG_CLIENT_RPGPROFILERMARKERUTILITY_GETMARKERWITHSTRINGDATA_OFFSET UNITYSDK_OFFSET(0x1EF921B0)
#define RPG_CLIENT_RPGPROFILERMARKERUTILITY_GETMARKER_OFFSET UNITYSDK_OFFSET(0x1EF92190)
#define RPG_CLIENT_RPGPROFILERMARKERUTILITY_PROFILELEVEL_OFFSET UNITYSDK_OFFSET(0x1EF921D0)
#define RPG_CLIENT_RPGPROFILERMARKERUTILITY_SETPROFILELEVEL_OFFSET UNITYSDK_OFFSET(0x1EF92210)
#define RPG_CLIENT_RPGPROFILERMARKERUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF92230)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGProfilerMarkerUtility_TypeDefinitionIndex = 34497;

	class RPGProfilerMarkerUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::RPGProfilerMarkerWithObject*>** StaticGet_s_RPGProfilerMarkersWithObject()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::RPGProfilerMarkerWithObject*>**)Il2CppClass::FromTypeDefinitionIndex(RPGProfilerMarkerUtility_TypeDefinitionIndex)->GetStaticField(0xA60);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::RPGProfilerMarker*>** StaticGet_s_RPGProfilerMarkers()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::RPGProfilerMarker*>**)Il2CppClass::FromTypeDefinitionIndex(RPGProfilerMarkerUtility_TypeDefinitionIndex)->GetStaticField(0xA68);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::RPGProfilerMarkerWithStringData*>** StaticGet_s_RPGProfilerMarkerWithStringData()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::RPGProfilerMarkerWithStringData*>**)Il2CppClass::FromTypeDefinitionIndex(RPGProfilerMarkerUtility_TypeDefinitionIndex)->GetStaticField(0xA70);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::RPGProfilerMarkerWithIntData*>** StaticGet_s_RPGProfilerMarkersWithIntData()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::RPGProfilerMarkerWithIntData*>**)Il2CppClass::FromTypeDefinitionIndex(RPGProfilerMarkerUtility_TypeDefinitionIndex)->GetStaticField(0xA78);
		}
		static ::System::Int32* StaticGet_s_ProfileLevel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RPGProfilerMarkerUtility_TypeDefinitionIndex)->GetStaticField(0x510);
		}
		static ::System::Int32* StaticGet_s_SetProfileLevelCache()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RPGProfilerMarkerUtility_TypeDefinitionIndex)->GetStaticField(0x514);
		}
		static ::System::Int32* StaticGet_s_SetProfileLevelInFrameCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RPGProfilerMarkerUtility_TypeDefinitionIndex)->GetStaticField(0x518);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERUTILITY__CCTOR_OFFSET))();
		}

		static ::RPG::Client::RPGProfilerMarker* GetMarker(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::RPGProfilerMarker*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERUTILITY_GETMARKER_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::RPGProfilerMarkerWithIntData* GetMarkerWithIntData(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::RPG::Client::RPGProfilerMarkerWithIntData*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERUTILITY_GETMARKERWITHINTDATA_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::RPGProfilerMarkerWithStringData* GetMarkerWithStringData(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::RPG::Client::RPGProfilerMarkerWithStringData*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERUTILITY_GETMARKERWITHSTRINGDATA_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::RPGProfilerMarkerWithObject* GetMarkerWithObject(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::RPG::Client::RPGProfilerMarkerWithObject*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERUTILITY_GETMARKERWITHOBJECT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 ProfileLevel()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERUTILITY_PROFILELEVEL_OFFSET))();
		}

		static ::System::Void SetProfileLevel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERUTILITY_SETPROFILELEVEL_OFFSET))(a1);
		}
	};
}
