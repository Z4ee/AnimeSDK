#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CustomScreenTransferType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_5057FF2FC249EB8D_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0x1BE95FB0)
#define CLASS_3_5057FF2FC249EB8D_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1BE95FF0)
#define CLASS_3_5057FF2FC249EB8D__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE95FE0)

inline static constexpr unsigned int Class_3_5057FF2FC249EB8D_TypeDefinitionIndex = 21111;

class Class_3_5057FF2FC249EB8D : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::CustomScreenTransferType Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5057FF2FC249EB8D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_79D2339C9987D6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5057FF2FC249EB8D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5057FF2FC249EB8D*&))((::PBYTE)hIl2Cpp + CLASS_3_5057FF2FC249EB8D_METHOD_3_79D2339C9987D6C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5057FF2FC249EB8D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5057FF2FC249EB8D*))((::PBYTE)hIl2Cpp + CLASS_3_5057FF2FC249EB8D_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
