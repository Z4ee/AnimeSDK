#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EDE247AF05B200CA.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IAvatarPromotionCommonRowWrap; }

#define CLASS_1_48FB2FDCA3FB3FF3_METHOD_1_46B5356EE10FBEC5_OFFSET UNITYSDK_OFFSET(0x11429EB0)

inline static constexpr unsigned int Class_1_48FB2FDCA3FB3FF3_TypeDefinitionIndex = 50909;

class Class_1_48FB2FDCA3FB3FF3 : public ::System::Object
{
public:
	static ::RPG::GameCore::IAvatarPromotionCommonRowWrap* Method_1_46B5356EE10FBEC5(::Struct_2_EDE247AF05B200CA a1)
	{
		return ((::RPG::GameCore::IAvatarPromotionCommonRowWrap*(*)(::Struct_2_EDE247AF05B200CA))((::PBYTE)hIl2Cpp + CLASS_1_48FB2FDCA3FB3FF3_METHOD_1_46B5356EE10FBEC5_OFFSET))(a1);
	}
};
