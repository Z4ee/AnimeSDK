#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class HoyoTagInfo; }
namespace RPG::GameCore { class HoyoTagNodeInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A9A6BC79D8034BA6_METHOD_1_4C288C0C3DC7B4CA_OFFSET UNITYSDK_OFFSET(0x1CCB9EC0)
#define CLASS_1_A9A6BC79D8034BA6_METHOD_1_62C3F50DADE97056_OFFSET UNITYSDK_OFFSET(0x1CCBA090)
#define CLASS_1_A9A6BC79D8034BA6_METHOD_1_B00A1D822E6F5C31_OFFSET UNITYSDK_OFFSET(0x1CCB9E30)
#define CLASS_1_A9A6BC79D8034BA6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCBA370)

inline static constexpr unsigned int Class_1_A9A6BC79D8034BA6_TypeDefinitionIndex = 24565;

class Class_1_A9A6BC79D8034BA6 : public ::System::Object
{
public:
	static ::RPG::GameCore::HoyoTagInfo** StaticGet_PMAPIEMDKKA()
	{
		return (::RPG::GameCore::HoyoTagInfo**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9A6BC79D8034BA6_TypeDefinitionIndex)->GetStaticField(0x3BB70);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::HoyoTagNodeInfo*>** StaticGet_EGCPIFFAFPC()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::HoyoTagNodeInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9A6BC79D8034BA6_TypeDefinitionIndex)->GetStaticField(0x3BB78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9A6BC79D8034BA6__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_B00A1D822E6F5C31()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9A6BC79D8034BA6_METHOD_1_B00A1D822E6F5C31_OFFSET))();
	}

	static ::System::Void Method_1_4C288C0C3DC7B4CA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9A6BC79D8034BA6_METHOD_1_4C288C0C3DC7B4CA_OFFSET))();
	}

	static ::RPG::GameCore::HoyoTagNodeInfo* Method_1_62C3F50DADE97056(::System::Int32 a1)
	{
		return ((::RPG::GameCore::HoyoTagNodeInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A9A6BC79D8034BA6_METHOD_1_62C3F50DADE97056_OFFSET))(a1);
	}
};
