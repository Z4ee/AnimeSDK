#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_832D46E76C8F7302;
class Class_1_B0877C107BC7F2BF;
namespace MoleMole { class CameraShotData; }

#define CLASS_1_832D46E76C8F7302_CLASS_1_A1E9086B4A38FA30_METHOD_1_E530905EC9C5B4AD_OFFSET UNITYSDK_OFFSET(0x167185C0)
#define CLASS_1_832D46E76C8F7302_CLASS_1_A1E9086B4A38FA30__CTOR_OFFSET UNITYSDK_OFFSET(0x167185B0)

inline static constexpr unsigned int Class_1_832D46E76C8F7302_Class_1_A1E9086B4A38FA30_TypeDefinitionIndex = 66004;

class Class_1_832D46E76C8F7302_Class_1_A1E9086B4A38FA30 : public ::System::Object
{
public:
	::MoleMole::CameraShotData* Field_1_1; // 0x10
	::Class_1_832D46E76C8F7302* Field_1_2; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_832D46E76C8F7302_CLASS_1_A1E9086B4A38FA30__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E530905EC9C5B4AD(::Class_1_B0877C107BC7F2BF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B0877C107BC7F2BF*))((::PBYTE)hIl2Cpp + CLASS_1_832D46E76C8F7302_CLASS_1_A1E9086B4A38FA30_METHOD_1_E530905EC9C5B4AD_OFFSET))(this, a1);
	}
};
