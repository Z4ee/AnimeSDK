#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_054FCEA7D0BC7163.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimatorZone; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_53DC17B82C05A266_METHOD_1_16E66AF447B83C9F_OFFSET UNITYSDK_OFFSET(0x161BAE30)
#define CLASS_1_53DC17B82C05A266_METHOD_1_76918BAAE41D8910_OFFSET UNITYSDK_OFFSET(0x161BB010)
#define CLASS_1_53DC17B82C05A266__CCTOR_OFFSET UNITYSDK_OFFSET(0x161BAD60)
#define CLASS_1_53DC17B82C05A266__CTOR_OFFSET UNITYSDK_OFFSET(0x161BAD50)

inline static constexpr unsigned int Class_1_53DC17B82C05A266_TypeDefinitionIndex = 90923;

class Class_1_53DC17B82C05A266 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Enum_3_054FCEA7D0BC7163>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Enum_3_054FCEA7D0BC7163>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_53DC17B82C05A266_TypeDefinitionIndex)->GetStaticField(0x46020);
	}
	static ::MoleMole::Config::AnimatorZone** StaticGet_Field_1_7()
	{
		return (::MoleMole::Config::AnimatorZone**)Il2CppClass::FromTypeDefinitionIndex(Class_1_53DC17B82C05A266_TypeDefinitionIndex)->GetStaticField(0x46028);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_53DC17B82C05A266_TypeDefinitionIndex)->GetStaticField(0x103E0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53DC17B82C05A266__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_53DC17B82C05A266__CCTOR_OFFSET))();
	}

	static ::Enum_3_054FCEA7D0BC7163 Method_1_16E66AF447B83C9F(::MoleMole::Config::AnimatorZone* a1)
	{
		return ((::Enum_3_054FCEA7D0BC7163(*)(::MoleMole::Config::AnimatorZone*))((::PBYTE)hIl2Cpp + CLASS_1_53DC17B82C05A266_METHOD_1_16E66AF447B83C9F_OFFSET))(a1);
	}

	static ::Enum_3_054FCEA7D0BC7163 Method_1_76918BAAE41D8910(::MoleMole::Config::AnimatorZone* a1)
	{
		return ((::Enum_3_054FCEA7D0BC7163(*)(::MoleMole::Config::AnimatorZone*))((::PBYTE)hIl2Cpp + CLASS_1_53DC17B82C05A266_METHOD_1_76918BAAE41D8910_OFFSET))(a1);
	}
};
