#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C3183153408A386B.h"
#include "unitysdk/Struct_2_648594091F1A68D6.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_15C1107F59D2E68D;
namespace RPG::GameCore { class FreeStyleController; }
namespace RPG::GameCore { class FreeStyleMotionInfoConfig; }

#define CLASS_2_15C1107F59D2E68D_CLASS_2_81AA8E26C196687E_METHOD_2_B59059C63C48A691_OFFSET UNITYSDK_OFFSET(0xE4832B0)
#define CLASS_2_15C1107F59D2E68D_CLASS_2_81AA8E26C196687E_METHOD_2_F66E83D79F816FE5_OFFSET UNITYSDK_OFFSET(0xE4834E0)
#define CLASS_2_15C1107F59D2E68D_CLASS_2_81AA8E26C196687E__CTOR_OFFSET UNITYSDK_OFFSET(0xE47F2E0)

inline static constexpr unsigned int Class_2_15C1107F59D2E68D_Class_2_81AA8E26C196687E_TypeDefinitionIndex = 53497;

class Class_2_15C1107F59D2E68D_Class_2_81AA8E26C196687E : public ::Class_1_C3183153408A386B
{
public:
	::RPG::GameCore::FreeStyleMotionInfoConfig* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C
	::System::Nullable_1<::Struct_2_648594091F1A68D6> Field_2_3; // 0x20

	::System::Void _ctor(::Class_2_15C1107F59D2E68D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15C1107F59D2E68D*))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_CLASS_2_81AA8E26C196687E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B59059C63C48A691(::RPG::GameCore::FreeStyleController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleController*))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_CLASS_2_81AA8E26C196687E_METHOD_2_B59059C63C48A691_OFFSET))(this, a1);
	}

	::System::Void Method_2_F66E83D79F816FE5(::RPG::GameCore::FreeStyleController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleController*))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_CLASS_2_81AA8E26C196687E_METHOD_2_F66E83D79F816FE5_OFFSET))(this, a1);
	}
};
