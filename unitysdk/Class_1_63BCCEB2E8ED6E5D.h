#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F1C4ECC5EFDCA1EF_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IAvatarPromotionCommonRowWrap; }

#define CLASS_1_63BCCEB2E8ED6E5D_METHOD_1_7FBAF3EE94D313F2_OFFSET UNITYSDK_OFFSET(0x17E6AF90)

inline static constexpr unsigned int Class_1_63BCCEB2E8ED6E5D_TypeDefinitionIndex = 62725;

class Class_1_63BCCEB2E8ED6E5D : public ::System::Object
{
public:
	static ::RPG::GameCore::IAvatarPromotionCommonRowWrap* Method_1_7FBAF3EE94D313F2(::Struct_2_F1C4ECC5EFDCA1EF_1 a1)
	{
		return ((::RPG::GameCore::IAvatarPromotionCommonRowWrap*(*)(::Struct_2_F1C4ECC5EFDCA1EF_1))((::PBYTE)hIl2Cpp + CLASS_1_63BCCEB2E8ED6E5D_METHOD_1_7FBAF3EE94D313F2_OFFSET))(a1);
	}
};
