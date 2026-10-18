#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CreateCharacter; }
namespace RPG::GameCore { class LevelNPCStillConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_4A0EAAA345DD602D_METHOD_1_1BA0FB92D7C60908_OFFSET UNITYSDK_OFFSET(0xDFC8320)
#define CLASS_1_4A0EAAA345DD602D_METHOD_1_222A57049341EDF9_OFFSET UNITYSDK_OFFSET(0xDFC80D0)
#define CLASS_1_4A0EAAA345DD602D_METHOD_1_3381E3E1B6DA16A0_OFFSET UNITYSDK_OFFSET(0xDFC7DA0)
#define CLASS_1_4A0EAAA345DD602D_METHOD_1_9EB96FF2E85BFE72_OFFSET UNITYSDK_OFFSET(0xDFC8250)
#define CLASS_1_4A0EAAA345DD602D_METHOD_1_AD4C349A23D0D28B_OFFSET UNITYSDK_OFFSET(0xDFC8020)
#define CLASS_1_4A0EAAA345DD602D_METHOD_1_E05AB6AA0AFA930B_OFFSET UNITYSDK_OFFSET(0xDFC7E40)
#define CLASS_1_4A0EAAA345DD602D_METHOD_1_FA53007A29B435C0_1_OFFSET UNITYSDK_OFFSET(0xDFC8290)
#define CLASS_1_4A0EAAA345DD602D_METHOD_1_FA53007A29B435C0_OFFSET UNITYSDK_OFFSET(0xDFC81B0)

inline static constexpr unsigned int Class_1_4A0EAAA345DD602D_TypeDefinitionIndex = 48367;

class Class_1_4A0EAAA345DD602D : public ::System::Object
{
public:
	static ::System::Func_2<::System::String*, ::System::String*>** StaticGet_EDAKBOIFLJF()
	{
		return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A0EAAA345DD602D_TypeDefinitionIndex)->GetStaticField(0x5C550);
	}
	// static const ::System::String* EEDECBCIAAH; // 0x0

	static ::RPG::GameCore::LevelNPCStillConfig* Method_1_3381E3E1B6DA16A0()
	{
		return ((::RPG::GameCore::LevelNPCStillConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A0EAAA345DD602D_METHOD_1_3381E3E1B6DA16A0_OFFSET))();
	}

	static ::System::String* Method_1_E05AB6AA0AFA930B(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4A0EAAA345DD602D_METHOD_1_E05AB6AA0AFA930B_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::String*>* Method_1_AD4C349A23D0D28B(::System::String* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4A0EAAA345DD602D_METHOD_1_AD4C349A23D0D28B_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::String*>* Method_1_222A57049341EDF9(::System::String* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4A0EAAA345DD602D_METHOD_1_222A57049341EDF9_OFFSET))(a1);
	}

	static ::System::String* Method_1_FA53007A29B435C0(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4A0EAAA345DD602D_METHOD_1_FA53007A29B435C0_OFFSET))(a1);
	}

	static ::System::String* Method_1_FA53007A29B435C0_1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4A0EAAA345DD602D_METHOD_1_FA53007A29B435C0_1_OFFSET))(a1);
	}

	static ::RPG::GameCore::CreateCharacter* Method_1_9EB96FF2E85BFE72(::System::String* a1)
	{
		return ((::RPG::GameCore::CreateCharacter*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4A0EAAA345DD602D_METHOD_1_9EB96FF2E85BFE72_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1BA0FB92D7C60908(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4A0EAAA345DD602D_METHOD_1_1BA0FB92D7C60908_OFFSET))(a1);
	}
};
