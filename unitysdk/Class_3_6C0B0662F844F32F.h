#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_6C0B0662F844F32F_METHOD_3_14B90E8D92C1073E_OFFSET UNITYSDK_OFFSET(0x19186680)
#define CLASS_3_6C0B0662F844F32F_METHOD_3_2689645F20617A7A_OFFSET UNITYSDK_OFFSET(0x19186600)
#define CLASS_3_6C0B0662F844F32F__CTOR_OFFSET UNITYSDK_OFFSET(0x19186650)

inline static constexpr unsigned int Class_3_6C0B0662F844F32F_TypeDefinitionIndex = 22056;

class Class_3_6C0B0662F844F32F : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::String*>* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C0B0662F844F32F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2689645F20617A7A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6C0B0662F844F32F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6C0B0662F844F32F*&))((::PBYTE)hIl2Cpp + CLASS_3_6C0B0662F844F32F_METHOD_3_2689645F20617A7A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_14B90E8D92C1073E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6C0B0662F844F32F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6C0B0662F844F32F*))((::PBYTE)hIl2Cpp + CLASS_3_6C0B0662F844F32F_METHOD_3_14B90E8D92C1073E_OFFSET))(a1, a2);
	}
};
