#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HELIOBUSPOSTIMGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3D91A0)
#define RPG_GAMECORE_HELIOBUSPOSTIMGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D9790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusPostImgRow_TypeDefinitionIndex = 13644;

	class HeliobusPostImgRow : public ::System::Object
	{
	public:
		::System::String* PostImgPath; // 0x10
		::System::UInt32 PostImgID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeliobusPostImgRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusPostImgRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
