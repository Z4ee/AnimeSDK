#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_049053A9DCD26B56;
class Class_2_4CDC13220E4CDFEE;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_552EC1E7B14B2FEA_METHOD_3_2D474E626FF7B9A2_OFFSET UNITYSDK_OFFSET(0x1C7573D0)
#define CLASS_3_552EC1E7B14B2FEA_METHOD_3_A6F54A9E721BB5D2_OFFSET UNITYSDK_OFFSET(0x1C757470)
#define CLASS_3_552EC1E7B14B2FEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C757430)

inline static constexpr unsigned int Class_3_552EC1E7B14B2FEA_TypeDefinitionIndex = 20827;

class Class_3_552EC1E7B14B2FEA : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::Class_2_4CDC13220E4CDFEE* GLOLLKPPFNE; // 0x20
	::System::String* GFNAPNFFGPJ; // 0x28
	::Il2CppArray<::Class_2_049053A9DCD26B56*>* AKFIIKNDBOH; // 0x30
	::System::Single IEHPFADHJFD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_552EC1E7B14B2FEA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D474E626FF7B9A2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_552EC1E7B14B2FEA*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_552EC1E7B14B2FEA*&))((::PBYTE)hIl2Cpp + CLASS_3_552EC1E7B14B2FEA_METHOD_3_2D474E626FF7B9A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A6F54A9E721BB5D2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_552EC1E7B14B2FEA* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_552EC1E7B14B2FEA*))((::PBYTE)hIl2Cpp + CLASS_3_552EC1E7B14B2FEA_METHOD_3_A6F54A9E721BB5D2_OFFSET))(a1, a2);
	}
};
