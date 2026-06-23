#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CinemaSingleBeatMapConfig; }
namespace MoleMole { class CinemaSingleBeatMapConfig_BeatMap; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D4B1B05403EFB954_METHOD_1_38D955AF030ADD27_OFFSET UNITYSDK_OFFSET(0x16891450)
#define CLASS_1_D4B1B05403EFB954_METHOD_1_40B31E5F8149ED80_OFFSET UNITYSDK_OFFSET(0x16891660)
#define CLASS_1_D4B1B05403EFB954_METHOD_1_4EF388D8F47E3C7D_OFFSET UNITYSDK_OFFSET(0x16891880)
#define CLASS_1_D4B1B05403EFB954_METHOD_1_C7CDD7C60F10FD83_OFFSET UNITYSDK_OFFSET(0x16891570)
#define CLASS_1_D4B1B05403EFB954__CTOR_OFFSET UNITYSDK_OFFSET(0x16891440)

inline static constexpr unsigned int Class_1_D4B1B05403EFB954_TypeDefinitionIndex = 71386;

class Class_1_D4B1B05403EFB954 : public ::System::Object
{
public:
	static ::MoleMole::CinemaSingleBeatMapConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::CinemaSingleBeatMapConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D4B1B05403EFB954_TypeDefinitionIndex)->GetStaticField(0x3E180);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4B1B05403EFB954__CTOR_OFFSET))(this);
	}

	static ::MoleMole::CinemaSingleBeatMapConfig_BeatMap* Method_1_38D955AF030ADD27(::System::String* a1)
	{
		return ((::MoleMole::CinemaSingleBeatMapConfig_BeatMap*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D4B1B05403EFB954_METHOD_1_38D955AF030ADD27_OFFSET))(a1);
	}

	static ::System::Void Method_1_C7CDD7C60F10FD83(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D4B1B05403EFB954_METHOD_1_C7CDD7C60F10FD83_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_40B31E5F8149ED80(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D4B1B05403EFB954_METHOD_1_40B31E5F8149ED80_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_4EF388D8F47E3C7D(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D4B1B05403EFB954_METHOD_1_4EF388D8F47E3C7D_OFFSET))(a1);
	}
};
