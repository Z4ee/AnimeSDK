#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_BD800F5B29A08E1F;
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_92852EEAD8A3EE7C_METHOD_2_2A3D576B4AB2DF6F_OFFSET UNITYSDK_OFFSET(0x11BCF330)
#define STRUCT_2_92852EEAD8A3EE7C_METHOD_2_651891ACF808B247_OFFSET UNITYSDK_OFFSET(0x11BCEF40)

inline static constexpr unsigned int Struct_2_92852EEAD8A3EE7C_TypeDefinitionIndex = 53260;

struct alignas(4) Struct_2_92852EEAD8A3EE7C
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::System::Int32 Field_2_3; // 0x1C

	static ::System::Void Method_2_651891ACF808B247(::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_92852EEAD8A3EE7C>* a2)
	{
		return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_92852EEAD8A3EE7C>*))((::PBYTE)hIl2Cpp + STRUCT_2_92852EEAD8A3EE7C_METHOD_2_651891ACF808B247_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_2A3D576B4AB2DF6F(::Class_1_BD800F5B29A08E1F* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_92852EEAD8A3EE7C>* a2)
	{
		return ((::System::Void(*)(::Class_1_BD800F5B29A08E1F*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_92852EEAD8A3EE7C>*))((::PBYTE)hIl2Cpp + STRUCT_2_92852EEAD8A3EE7C_METHOD_2_2A3D576B4AB2DF6F_OFFSET))(a1, a2);
	}
};
