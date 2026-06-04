#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CurveData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE_START_OFFSET UNITYSDK_OFFSET(0xBCDE530)
#define RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE_UPDATE_OFFSET UNITYSDK_OFFSET(0xBCDE6B0)
#define RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0xBCDE8F0)
#define RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xBCDE8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int HDRPaperWhiteReferenceImage_TypeDefinitionIndex = 68010;

	class HDRPaperWhiteReferenceImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0xBB30);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0xBB34);
		}
		static ::System::Int32* StaticGet_Field_5_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0xBB38);
		}
		static ::System::Int32* StaticGet_Field_5_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0xBB3C);
		}
		static ::System::Int32* StaticGet_Field_5_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0xBB40);
		}
		static ::System::Int32* StaticGet_Field_5_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0xBB44);
		}
		static ::System::Int32* StaticGet_Field_5_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0xBB48);
		}
		static ::System::Int32* StaticGet_Field_5_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0xBB4C);
		}
		::UnityEngine::UI::Image* Field_5_8; // 0x18
		::UnityEngine::Material* Field_5_9; // 0x20
		::UnityEngine::TextAsset* curveParamsJson; // 0x28
		::RPG::CustomRP::CurveData Field_5_11; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE_UPDATE_OFFSET))(this);
		}
	};
}
