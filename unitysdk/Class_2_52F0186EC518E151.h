#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UICoopNewTipsDialogPopWindowController_Context; }
namespace System::Collections { class IEnumerable; }
template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_52F0186EC518E151_METHOD_2_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x11E7E270)
#define CLASS_2_52F0186EC518E151_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11E7E5F0)
#define CLASS_2_52F0186EC518E151_METHOD_2_FA052527C47A07CA_OFFSET UNITYSDK_OFFSET(0x11E7E680)
#define CLASS_2_52F0186EC518E151_METHOD_2_FEAD8F4E8B9E3C79_OFFSET UNITYSDK_OFFSET(0x11E7E1A0)
#define CLASS_2_52F0186EC518E151__CTOR_OFFSET UNITYSDK_OFFSET(0x11E7E5A0)

inline static constexpr unsigned int Class_2_52F0186EC518E151_TypeDefinitionIndex = 45429;

class Class_2_52F0186EC518E151 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_0_16E4307DCC41950C_13<::MoleMole::UICoopNewTipsDialogPopWindowController_Context*>* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52F0186EC518E151__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_FEAD8F4E8B9E3C79(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_52F0186EC518E151_METHOD_2_FEAD8F4E8B9E3C79_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52F0186EC518E151_METHOD_2_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52F0186EC518E151_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::IEnumerable* Method_2_FA052527C47A07CA()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52F0186EC518E151_METHOD_2_FA052527C47A07CA_OFFSET))(this);
	}
};
