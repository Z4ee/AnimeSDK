#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamTowersGameOperationType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_0D8E5F1714E99559_METHOD_3_14756EFE7C5E4FA5_OFFSET UNITYSDK_OFFSET(0x1D0AC810)
#define CLASS_3_0D8E5F1714E99559_METHOD_3_A68A36A6BFF9F2B4_OFFSET UNITYSDK_OFFSET(0x1D0D1300)
#define CLASS_3_0D8E5F1714E99559__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0AC800)

inline static constexpr unsigned int Class_3_0D8E5F1714E99559_TypeDefinitionIndex = 21310;

class Class_3_0D8E5F1714E99559 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* NNACKOBKFGE; // 0x18
	::RPG::GameCore::TeamTowersGameOperationType NDJKPABPJHO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D8E5F1714E99559__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A68A36A6BFF9F2B4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0D8E5F1714E99559*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0D8E5F1714E99559*&))((::PBYTE)hIl2Cpp + CLASS_3_0D8E5F1714E99559_METHOD_3_A68A36A6BFF9F2B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_14756EFE7C5E4FA5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0D8E5F1714E99559* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0D8E5F1714E99559*))((::PBYTE)hIl2Cpp + CLASS_3_0D8E5F1714E99559_METHOD_3_14756EFE7C5E4FA5_OFFSET))(a1, a2);
	}
};
