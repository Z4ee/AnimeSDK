#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_6C0B0662F844F32F_METHOD_3_14B90E8D92C1073E_OFFSET UNITYSDK_OFFSET(0x1CB22F50)
#define CLASS_3_6C0B0662F844F32F_METHOD_3_F2F19A0D61B85A09_OFFSET UNITYSDK_OFFSET(0x1CB22F10)
#define CLASS_3_6C0B0662F844F32F__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB22F40)

inline static constexpr unsigned int Class_3_6C0B0662F844F32F_TypeDefinitionIndex = 23064;

class Class_3_6C0B0662F844F32F : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* MDBHPILLAPA; // 0x18
	::Il2CppArray<::System::String*>* MMCPCPAEEAH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C0B0662F844F32F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F2F19A0D61B85A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6C0B0662F844F32F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6C0B0662F844F32F*&))((::PBYTE)hIl2Cpp + CLASS_3_6C0B0662F844F32F_METHOD_3_F2F19A0D61B85A09_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_14B90E8D92C1073E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6C0B0662F844F32F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6C0B0662F844F32F*))((::PBYTE)hIl2Cpp + CLASS_3_6C0B0662F844F32F_METHOD_3_14B90E8D92C1073E_OFFSET))(a1, a2);
	}
};
