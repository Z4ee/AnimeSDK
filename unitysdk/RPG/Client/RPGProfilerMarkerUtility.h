#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class RPGProfilerMarkerWithIntData; }
namespace RPG::Client { class RPGProfilerMarkerWithObject; }
namespace RPG::Client { class RPGProfilerMarkerWithStringData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_RPGPROFILERMARKERUTILITY_GETMARKERWITHINTDATA_OFFSET UNITYSDK_OFFSET(0x19D32B80)
#define RPG_CLIENT_RPGPROFILERMARKERUTILITY_GETMARKERWITHOBJECT_OFFSET UNITYSDK_OFFSET(0x19D32BA0)
#define RPG_CLIENT_RPGPROFILERMARKERUTILITY_GETMARKERWITHSTRINGDATA_OFFSET UNITYSDK_OFFSET(0x19D32B90)
#define RPG_CLIENT_RPGPROFILERMARKERUTILITY_GETMARKER_OFFSET UNITYSDK_OFFSET(0x19D32B70)
#define RPG_CLIENT_RPGPROFILERMARKERUTILITY_PROFILELEVEL_OFFSET UNITYSDK_OFFSET(0x19D32BB0)
#define RPG_CLIENT_RPGPROFILERMARKERUTILITY_SETPROFILELEVEL_OFFSET UNITYSDK_OFFSET(0x19D32BF0)
#define RPG_CLIENT_RPGPROFILERMARKERUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D32C10)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGProfilerMarkerUtility_TypeDefinitionIndex = 33252;

	class RPGProfilerMarkerUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::RPGProfilerMarker*>** StaticGet_s_RPGProfilerMarkers()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::RPGProfilerMarker*>**)Il2CppClass::FromTypeDefinitionIndex(RPGProfilerMarkerUtility_TypeDefinitionIndex)->GetStaticField(0xCE0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::RPGProfilerMarkerWithIntData*>** StaticGet_s_RPGProfilerMarkersWithIntData()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::RPGProfilerMarkerWithIntData*>**)Il2CppClass::FromTypeDefinitionIndex(RPGProfilerMarkerUtility_TypeDefinitionIndex)->GetStaticField(0xCE8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::RPGProfilerMarkerWithObject*>** StaticGet_s_RPGProfilerMarkersWithObject()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::RPGProfilerMarkerWithObject*>**)Il2CppClass::FromTypeDefinitionIndex(RPGProfilerMarkerUtility_TypeDefinitionIndex)->GetStaticField(0xCF0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::RPGProfilerMarkerWithStringData*>** StaticGet_s_RPGProfilerMarkerWithStringData()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::RPGProfilerMarkerWithStringData*>**)Il2CppClass::FromTypeDefinitionIndex(RPGProfilerMarkerUtility_TypeDefinitionIndex)->GetStaticField(0xCF8);
		}
		static ::System::Int32* StaticGet_s_SetProfileLevelCache()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RPGProfilerMarkerUtility_TypeDefinitionIndex)->GetStaticField(0x7B0);
		}
		static ::System::Int32* StaticGet_s_SetProfileLevelInFrameCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RPGProfilerMarkerUtility_TypeDefinitionIndex)->GetStaticField(0x7B4);
		}
		static ::System::Int32* StaticGet_s_ProfileLevel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RPGProfilerMarkerUtility_TypeDefinitionIndex)->GetStaticField(0x7B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERUTILITY__CCTOR_OFFSET))();
		}

		static ::RPG::Client::RPGProfilerMarker* GetMarker(::System::String* name, ::System::Int32 markerLevel, ::System::Int32 budgetMS)
		{
			return ((::RPG::Client::RPGProfilerMarker*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERUTILITY_GETMARKER_OFFSET))(name, markerLevel, budgetMS);
		}

		static ::RPG::Client::RPGProfilerMarkerWithIntData* GetMarkerWithIntData(::System::String* name, ::System::String* parameterName1, ::System::String* parameterName2, ::System::Int32 markerLevel)
		{
			return ((::RPG::Client::RPGProfilerMarkerWithIntData*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERUTILITY_GETMARKERWITHINTDATA_OFFSET))(name, parameterName1, parameterName2, markerLevel);
		}

		static ::RPG::Client::RPGProfilerMarkerWithStringData* GetMarkerWithStringData(::System::String* name, ::System::String* parameterName1, ::System::String* parameterName2, ::System::Int32 markerLevel)
		{
			return ((::RPG::Client::RPGProfilerMarkerWithStringData*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERUTILITY_GETMARKERWITHSTRINGDATA_OFFSET))(name, parameterName1, parameterName2, markerLevel);
		}

		static ::RPG::Client::RPGProfilerMarkerWithObject* GetMarkerWithObject(::System::String* name, ::System::String* parameterName1, ::System::String* parameterName2, ::System::Int32 markerLevel)
		{
			return ((::RPG::Client::RPGProfilerMarkerWithObject*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERUTILITY_GETMARKERWITHOBJECT_OFFSET))(name, parameterName1, parameterName2, markerLevel);
		}

		static ::System::Int32 ProfileLevel()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERUTILITY_PROFILELEVEL_OFFSET))();
		}

		static ::System::Void SetProfileLevel(::System::Int32 newLevel)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERUTILITY_SETPROFILELEVEL_OFFSET))(newLevel);
		}
	};
}
