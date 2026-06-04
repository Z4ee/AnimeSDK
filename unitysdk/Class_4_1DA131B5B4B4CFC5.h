#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_1DA131B5B4B4CFC5_METHOD_4_9968A253B5B328D1_OFFSET UNITYSDK_OFFSET(0x18FF08B0)
#define CLASS_4_1DA131B5B4B4CFC5_METHOD_4_BEF80FB83E1A1534_OFFSET UNITYSDK_OFFSET(0x18FF0B10)
#define CLASS_4_1DA131B5B4B4CFC5_METHOD_4_F1593D4CC137136F_OFFSET UNITYSDK_OFFSET(0x18FF0980)
#define CLASS_4_1DA131B5B4B4CFC5_METHOD_4_F2A01E68E21A9123_OFFSET UNITYSDK_OFFSET(0x18FF0B90)
#define CLASS_4_1DA131B5B4B4CFC5__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF0930)

inline static constexpr unsigned int Class_4_1DA131B5B4B4CFC5_TypeDefinitionIndex = 22845;

class Class_4_1DA131B5B4B4CFC5 : public ::RPG::GameCore::PredicateConfig
{
public:
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1DA131B5B4B4CFC5__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_9968A253B5B328D1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_1DA131B5B4B4CFC5*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_1DA131B5B4B4CFC5*&))((::PBYTE)hIl2Cpp + CLASS_4_1DA131B5B4B4CFC5_METHOD_4_9968A253B5B328D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F1593D4CC137136F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_1DA131B5B4B4CFC5* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_1DA131B5B4B4CFC5*))((::PBYTE)hIl2Cpp + CLASS_4_1DA131B5B4B4CFC5_METHOD_4_F1593D4CC137136F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_BEF80FB83E1A1534(::SimpleJSON::JSONNode* a1, ::Class_4_1DA131B5B4B4CFC5*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_1DA131B5B4B4CFC5*&))((::PBYTE)hIl2Cpp + CLASS_4_1DA131B5B4B4CFC5_METHOD_4_BEF80FB83E1A1534_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F2A01E68E21A9123(::SimpleJSON::JSONNode* a1, ::Class_4_1DA131B5B4B4CFC5* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_1DA131B5B4B4CFC5*))((::PBYTE)hIl2Cpp + CLASS_4_1DA131B5B4B4CFC5_METHOD_4_F2A01E68E21A9123_OFFSET))(a1, a2);
	}
};
