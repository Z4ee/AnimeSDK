#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementVisualBase.h"

class Class_1_159F4A26A6FBCACF;
namespace System { class String; }

#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATBLENDTEX_METHOD_2_2EBB03D7F7E1E8C1_OFFSET UNITYSDK_OFFSET(0x18EA1D10)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATBLENDTEX_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18EA1C90)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATBLENDTEX_METHOD_2_B63771BD2393D93A_OFFSET UNITYSDK_OFFSET(0x18EA1B70)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATBLENDTEX_METHOD_2_CF0EF72A03B510AB_OFFSET UNITYSDK_OFFSET(0x18EA1BC0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATBLENDTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA2E60)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_BeatEffectElementMatBlendTex_TypeDefinitionIndex = 67654;

	class MusicVisualization_BeatEffectElementMatBlendTex : public ::RPG::Client::MusicVisualization_BeatEffectElementVisualBase
	{
	public:
		::System::Int32 MaterialIndex; // 0x30
		::System::String* PropertyName; // 0x38
		::System::Boolean IsSetStateTex; // 0x40
		::System::String* StateTexPropertyName; // 0x48
		::System::String* StateTex2PropertyName; // 0x50
		::System::String* StateTexLerpValPropertyName; // 0x58
		::System::Boolean _IsInitPropertyID; // 0x60
		::System::Int32 CustomPropertyID; // 0x64
		::System::Int32 StateTexLerpValPropertyID; // 0x68
		::System::Int32 StateTexPropertyID; // 0x6C
		::System::Int32 StateTex2PropertyID; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATBLENDTEX__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B63771BD2393D93A(::Class_1_159F4A26A6FBCACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATBLENDTEX_METHOD_2_B63771BD2393D93A_OFFSET))(this, a1);
		}

		::System::Void Method_2_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATBLENDTEX_METHOD_2_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_2_CF0EF72A03B510AB(::Class_1_159F4A26A6FBCACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATBLENDTEX_METHOD_2_CF0EF72A03B510AB_OFFSET))(this, a1);
		}

		::System::Void Method_2_2EBB03D7F7E1E8C1(::Class_1_159F4A26A6FBCACF* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATBLENDTEX_METHOD_2_2EBB03D7F7E1E8C1_OFFSET))(this, a1, a2);
		}
	};
}
