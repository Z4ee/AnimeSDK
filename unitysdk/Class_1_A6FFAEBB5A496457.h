#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SpritePreset; }
namespace System { class String; }

#define CLASS_1_A6FFAEBB5A496457_METHOD_1_00AA18458D984D9B_OFFSET UNITYSDK_OFFSET(0x16BDD570)
#define CLASS_1_A6FFAEBB5A496457_METHOD_1_010145CA7F5361E0_OFFSET UNITYSDK_OFFSET(0x16BDD520)
#define CLASS_1_A6FFAEBB5A496457_METHOD_1_05E10F4A3388E492_OFFSET UNITYSDK_OFFSET(0x16BDD3E0)
#define CLASS_1_A6FFAEBB5A496457_METHOD_1_A0B6B600D1E198C2_OFFSET UNITYSDK_OFFSET(0x16BDD2B0)
#define CLASS_1_A6FFAEBB5A496457_METHOD_1_F24A112B56A2E4B4_OFFSET UNITYSDK_OFFSET(0x16BDD490)
#define CLASS_1_A6FFAEBB5A496457__CTOR_OFFSET UNITYSDK_OFFSET(0x16BDD680)

inline static constexpr unsigned int Class_1_A6FFAEBB5A496457_TypeDefinitionIndex = 65953;

class Class_1_A6FFAEBB5A496457 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6FFAEBB5A496457__CTOR_OFFSET))(this);
	}

	static ::RPG::GameCore::SpritePreset* Method_1_A0B6B600D1E198C2(::System::String* a1)
	{
		return ((::RPG::GameCore::SpritePreset*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6FFAEBB5A496457_METHOD_1_A0B6B600D1E198C2_OFFSET))(a1);
	}

	static ::System::String* Method_1_F24A112B56A2E4B4()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6FFAEBB5A496457_METHOD_1_F24A112B56A2E4B4_OFFSET))();
	}

	static ::System::String* Method_1_010145CA7F5361E0()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6FFAEBB5A496457_METHOD_1_010145CA7F5361E0_OFFSET))();
	}

	static ::System::String* Method_1_00AA18458D984D9B(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6FFAEBB5A496457_METHOD_1_00AA18458D984D9B_OFFSET))(a1);
	}

	static ::System::String* Method_1_05E10F4A3388E492(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6FFAEBB5A496457_METHOD_1_05E10F4A3388E492_OFFSET))(a1);
	}
};
