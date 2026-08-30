#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Collision2DShapeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8EB7E77C2FC96244_METHOD_1_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x19FD15C0)
#define CLASS_1_8EB7E77C2FC96244_METHOD_1_E8FC0507C3ED6DFC_OFFSET UNITYSDK_OFFSET(0x19FD15B0)
#define CLASS_1_8EB7E77C2FC96244_METHOD_1_F16C13C91BE85E24_OFFSET UNITYSDK_OFFSET(0x19FD15D0)
#define CLASS_1_8EB7E77C2FC96244__CTOR_OFFSET UNITYSDK_OFFSET(0x19FD1620)

inline static constexpr unsigned int Class_1_8EB7E77C2FC96244_TypeDefinitionIndex = 53908;

class Class_1_8EB7E77C2FC96244 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint IDKONBFPBLH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EB7E77C2FC96244__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::Collision2DShapeType Method_1_E8FC0507C3ED6DFC()
	{
		return ((::RPG::GameCore::Collision2DShapeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EB7E77C2FC96244_METHOD_1_E8FC0507C3ED6DFC_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EB7E77C2FC96244_METHOD_1_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::Class_1_8EB7E77C2FC96244* Method_1_F16C13C91BE85E24(::RPG::GameCore::FixPoint a1)
	{
		return ((::Class_1_8EB7E77C2FC96244*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_8EB7E77C2FC96244_METHOD_1_F16C13C91BE85E24_OFFSET))(this, a1);
	}
};
