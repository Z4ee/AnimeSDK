#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class TagLibraryConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F06989A9BBC81E8D_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x112B12A0)
#define CLASS_1_F06989A9BBC81E8D_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x112B1920)
#define CLASS_1_F06989A9BBC81E8D_METHOD_1_5426BA1D210E0567_OFFSET UNITYSDK_OFFSET(0x112B16F0)
#define CLASS_1_F06989A9BBC81E8D_METHOD_1_A8C5A6D3A46B498A_1_OFFSET UNITYSDK_OFFSET(0x112B1700)
#define CLASS_1_F06989A9BBC81E8D_METHOD_1_A8C5A6D3A46B498A_OFFSET UNITYSDK_OFFSET(0x112B14C0)
#define CLASS_1_F06989A9BBC81E8D_METHOD_1_B8ECC30C0BAAC3E4_OFFSET UNITYSDK_OFFSET(0x112B16E0)

inline static constexpr unsigned int Class_1_F06989A9BBC81E8D_TypeDefinitionIndex = 85026;

class Class_1_F06989A9BBC81E8D : public ::System::Object
{
public:
	static ::MoleMole::Config::TagLibraryConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::TagLibraryConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F06989A9BBC81E8D_TypeDefinitionIndex)->GetStaticField(0x3DEB0);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F06989A9BBC81E8D_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_A8C5A6D3A46B498A(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F06989A9BBC81E8D_METHOD_1_A8C5A6D3A46B498A_OFFSET))(a1);
	}

	static ::System::Void Method_1_B8ECC30C0BAAC3E4(::MoleMole::Config::TagLibraryConfig* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::TagLibraryConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F06989A9BBC81E8D_METHOD_1_B8ECC30C0BAAC3E4_OFFSET))(a1);
	}

	static ::MoleMole::Config::TagLibraryConfig* Method_1_5426BA1D210E0567()
	{
		return ((::MoleMole::Config::TagLibraryConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F06989A9BBC81E8D_METHOD_1_5426BA1D210E0567_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_A8C5A6D3A46B498A_1(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F06989A9BBC81E8D_METHOD_1_A8C5A6D3A46B498A_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F06989A9BBC81E8D_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}
};
