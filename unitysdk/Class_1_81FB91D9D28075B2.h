#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class OverlayOutlineCollectionConfig; }
namespace MoleMole::Config { class OverlayOutlineConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_81FB91D9D28075B2_METHOD_1_1C220FB2D5EF514D_OFFSET UNITYSDK_OFFSET(0x18823C40)
#define CLASS_1_81FB91D9D28075B2_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x18823A20)
#define CLASS_1_81FB91D9D28075B2_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x18823930)
#define CLASS_1_81FB91D9D28075B2_METHOD_1_BBDFC9CA150B699C_OFFSET UNITYSDK_OFFSET(0x18823C90)

inline static constexpr unsigned int Class_1_81FB91D9D28075B2_TypeDefinitionIndex = 44217;

class Class_1_81FB91D9D28075B2 : public ::System::Object
{
public:
	static ::MoleMole::Config::OverlayOutlineCollectionConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::OverlayOutlineCollectionConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81FB91D9D28075B2_TypeDefinitionIndex)->GetStaticField(0x44390);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_81FB91D9D28075B2_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_81FB91D9D28075B2_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::OverlayOutlineCollectionConfig* Method_1_1C220FB2D5EF514D()
	{
		return ((::MoleMole::Config::OverlayOutlineCollectionConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_81FB91D9D28075B2_METHOD_1_1C220FB2D5EF514D_OFFSET))();
	}

	static ::System::Boolean Method_1_BBDFC9CA150B699C(::System::String* a1, ::MoleMole::Config::OverlayOutlineConfig*& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::OverlayOutlineConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_81FB91D9D28075B2_METHOD_1_BBDFC9CA150B699C_OFFSET))(a1, a2);
	}
};
