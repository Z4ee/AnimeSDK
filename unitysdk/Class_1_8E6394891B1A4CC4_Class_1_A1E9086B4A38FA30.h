#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8E6394891B1A4CC4;
class Class_1_B0877C107BC7F2BF;
namespace MoleMole { class CameraShotData; }

#define CLASS_1_8E6394891B1A4CC4_CLASS_1_A1E9086B4A38FA30_METHOD_1_E530905EC9C5B4AD_OFFSET UNITYSDK_OFFSET(0x13D9A6B0)
#define CLASS_1_8E6394891B1A4CC4_CLASS_1_A1E9086B4A38FA30__CTOR_OFFSET UNITYSDK_OFFSET(0x13D9A6A0)

inline static constexpr unsigned int Class_1_8E6394891B1A4CC4_Class_1_A1E9086B4A38FA30_TypeDefinitionIndex = 66178;

class Class_1_8E6394891B1A4CC4_Class_1_A1E9086B4A38FA30 : public ::System::Object
{
public:
	::Class_1_8E6394891B1A4CC4* Field_1_0; // 0x10
	::MoleMole::CameraShotData* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E6394891B1A4CC4_CLASS_1_A1E9086B4A38FA30__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E530905EC9C5B4AD(::Class_1_B0877C107BC7F2BF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B0877C107BC7F2BF*))((::PBYTE)hIl2Cpp + CLASS_1_8E6394891B1A4CC4_CLASS_1_A1E9086B4A38FA30_METHOD_1_E530905EC9C5B4AD_OFFSET))(this, a1);
	}
};
