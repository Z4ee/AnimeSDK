#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/Detail/RendererResourceSofdecPrimeYuvRawData.h"

namespace CriWare::CriMana { class MovieInfo; }
namespace UnityEngine { class Shader; }

#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEH264YUV__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4BD120)

namespace CriWare::CriMana::Detail
{
	inline static constexpr unsigned int RendererResourceH264Yuv_TypeDefinitionIndex = 32864;

	class RendererResourceH264Yuv : public ::CriWare::CriMana::Detail::RendererResourceSofdecPrimeYuvRawData
	{
	public:
		::System::Void _ctor(::System::Int32 playerId, ::CriWare::CriMana::MovieInfo* movieInfo, ::System::Boolean additive, ::UnityEngine::Shader* userShader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::CriWare::CriMana::MovieInfo*, ::System::Boolean, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEH264YUV__CTOR_OFFSET))(this, playerId, movieInfo, additive, userShader);
		}
	};
}
