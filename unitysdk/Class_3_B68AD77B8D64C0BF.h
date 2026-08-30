#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_B68AD77B8D64C0BF_METHOD_3_59C91D10D1D461D5_OFFSET UNITYSDK_OFFSET(0x1D6F9B20)
#define CLASS_3_B68AD77B8D64C0BF_METHOD_3_B0676F272208923C_OFFSET UNITYSDK_OFFSET(0x1D6F9BC0)
#define CLASS_3_B68AD77B8D64C0BF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F9B80)

inline static constexpr unsigned int Class_3_B68AD77B8D64C0BF_TypeDefinitionIndex = 22862;

class Class_3_B68AD77B8D64C0BF : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* DCLGGMAEMAO; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::System::String* CIDCEJCGOGB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B68AD77B8D64C0BF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_59C91D10D1D461D5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B68AD77B8D64C0BF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B68AD77B8D64C0BF*&))((::PBYTE)hIl2Cpp + CLASS_3_B68AD77B8D64C0BF_METHOD_3_59C91D10D1D461D5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B0676F272208923C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B68AD77B8D64C0BF* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B68AD77B8D64C0BF*))((::PBYTE)hIl2Cpp + CLASS_3_B68AD77B8D64C0BF_METHOD_3_B0676F272208923C_OFFSET))(a1, a2);
	}
};
