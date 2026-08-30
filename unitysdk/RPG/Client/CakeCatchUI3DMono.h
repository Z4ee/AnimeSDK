#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }

#define RPG_CLIENT_CAKECATCHUI3DMONO_AWAKE_OFFSET UNITYSDK_OFFSET(0xC9A1CB0)
#define RPG_CLIENT_CAKECATCHUI3DMONO_CLEARDITHER_OFFSET UNITYSDK_OFFSET(0xC9A1F10)
#define RPG_CLIENT_CAKECATCHUI3DMONO_GET_SHADERCOMP_OFFSET UNITYSDK_OFFSET(0xC9A1C40)
#define RPG_CLIENT_CAKECATCHUI3DMONO_SETDITHER_OFFSET UNITYSDK_OFFSET(0xC9A1DD0)
#define RPG_CLIENT_CAKECATCHUI3DMONO__CTOR_OFFSET UNITYSDK_OFFSET(0xC9A2020)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchUI3DMono_TypeDefinitionIndex = 63042;

	class CakeCatchUI3DMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::BaseShaderPropertyTransition* _ShaderComp; // 0x18
		::System::Single _DitherAlpha; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHUI3DMONO__CTOR_OFFSET))(this);
		}

		::RPG::Client::BaseShaderPropertyTransition* get_ShaderComp()
		{
			return ((::RPG::Client::BaseShaderPropertyTransition*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHUI3DMONO_GET_SHADERCOMP_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHUI3DMONO_AWAKE_OFFSET))(this);
		}

		::System::Void SetDither()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHUI3DMONO_SETDITHER_OFFSET))(this);
		}

		::System::Void ClearDither()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHUI3DMONO_CLEARDITHER_OFFSET))(this);
		}
	};
}
