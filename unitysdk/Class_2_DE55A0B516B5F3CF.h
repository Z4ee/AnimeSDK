#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_5.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class CheckRandomChanceAxis; }

#define CLASS_2_DE55A0B516B5F3CF_METHOD_2_512073A5E70F4E39_OFFSET UNITYSDK_OFFSET(0xD161B30)
#define CLASS_2_DE55A0B516B5F3CF_METHOD_2_5285E499CCD89702_OFFSET UNITYSDK_OFFSET(0xD1619F0)
#define CLASS_2_DE55A0B516B5F3CF__CTOR_OFFSET UNITYSDK_OFFSET(0xD1619E0)

inline static constexpr unsigned int Class_2_DE55A0B516B5F3CF_TypeDefinitionIndex = 50814;

class Class_2_DE55A0B516B5F3CF : public ::Class_1_F9FBCC956DFCF137_5
{
public:
	::RPG::GameCore::CheckRandomChanceAxis* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckRandomChanceAxis* a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckRandomChanceAxis*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_DE55A0B516B5F3CF__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_5285E499CCD89702()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE55A0B516B5F3CF_METHOD_2_5285E499CCD89702_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_512073A5E70F4E39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE55A0B516B5F3CF_METHOD_2_512073A5E70F4E39_OFFSET))(this);
	}
};
