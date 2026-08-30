#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_231AB9D7CB560FEC;

#define CLASS_3_EC335E7569F4FD0F_METHOD_3_14B90E8D92C1073E_OFFSET UNITYSDK_OFFSET(0x1D6F5C90)
#define CLASS_3_EC335E7569F4FD0F_METHOD_3_F2F19A0D61B85A09_OFFSET UNITYSDK_OFFSET(0x1D6F5C50)
#define CLASS_3_EC335E7569F4FD0F__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F5C80)

inline static constexpr unsigned int Class_3_EC335E7569F4FD0F_TypeDefinitionIndex = 23849;

class Class_3_EC335E7569F4FD0F : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::Class_2_231AB9D7CB560FEC*>* GBNDBGJLDKC; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* CABHEAGLNDD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC335E7569F4FD0F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F2F19A0D61B85A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EC335E7569F4FD0F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EC335E7569F4FD0F*&))((::PBYTE)hIl2Cpp + CLASS_3_EC335E7569F4FD0F_METHOD_3_F2F19A0D61B85A09_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_14B90E8D92C1073E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EC335E7569F4FD0F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EC335E7569F4FD0F*))((::PBYTE)hIl2Cpp + CLASS_3_EC335E7569F4FD0F_METHOD_3_14B90E8D92C1073E_OFFSET))(a1, a2);
	}
};
