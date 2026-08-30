#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_52FD3407BF850559_METHOD_3_14B90E8D92C1073E_OFFSET UNITYSDK_OFFSET(0x1CEA2A90)
#define CLASS_3_52FD3407BF850559_METHOD_3_F2F19A0D61B85A09_OFFSET UNITYSDK_OFFSET(0x1CEA2A50)
#define CLASS_3_52FD3407BF850559__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA2A80)

inline static constexpr unsigned int Class_3_52FD3407BF850559_TypeDefinitionIndex = 21317;

class Class_3_52FD3407BF850559 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::UInt32>* KPHIIIDGLEB; // 0x18
	::Il2CppArray<::System::UInt32>* CBBDEODGNDG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_52FD3407BF850559__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F2F19A0D61B85A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_52FD3407BF850559*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_52FD3407BF850559*&))((::PBYTE)hIl2Cpp + CLASS_3_52FD3407BF850559_METHOD_3_F2F19A0D61B85A09_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_14B90E8D92C1073E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_52FD3407BF850559* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_52FD3407BF850559*))((::PBYTE)hIl2Cpp + CLASS_3_52FD3407BF850559_METHOD_3_14B90E8D92C1073E_OFFSET))(a1, a2);
	}
};
