#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_46FE3E575CBDB25A.h"
#include "unitysdk/Enum_3_CBE15F282C7D6943.h"
#include "unitysdk/MoleMole/TextTypesetMidChar.h"
#include "unitysdk/Struct_2_2465FE796254C062.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__MIDLETTERTEXTDISPLAY_OFFSET UNITYSDK_OFFSET(0x1654A480)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__NOTINENDDISPLAY_OFFSET UNITYSDK_OFFSET(0x1654A290)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__NOTINHEADDISPLAY_OFFSET UNITYSDK_OFFSET(0x1654A450)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__NOTINHEADIFAFTERTEXTDISPLAY_OFFSET UNITYSDK_OFFSET(0x1654A460)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__SPECIALWORDDISPLAY_OFFSET UNITYSDK_OFFSET(0x1654A470)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_METHOD_1_01BE963E6AF97FBD_OFFSET UNITYSDK_OFFSET(0x1654A940)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_METHOD_1_6AAF54EBA8338F29_OFFSET UNITYSDK_OFFSET(0x1654A4A0)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_METHOD_1_C4D597C45DD581DC_OFFSET UNITYSDK_OFFSET(0x1654A2A0)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_METHOD_1_CCDD78442FA217D1_OFFSET UNITYSDK_OFFSET(0x1654AB00)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_METHOD_1_FBF0892E6836B37C_OFFSET UNITYSDK_OFFSET(0x1654A7A0)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1654A490)

namespace MoleMole
{
	inline static constexpr unsigned int UITextTypesettingSettings_TypeDefinitionIndex = 81767;

	class UITextTypesettingSettings : public ::System::Object
	{
	public:
		::System::String* Ellipsis; // 0x10
		::Il2CppArray<::System::String*>* NotInEnd; // 0x18
		::Il2CppArray<::System::String*>* NotInHead; // 0x20
		::Il2CppArray<::System::String*>* NotInHeadIfAfterText; // 0x28
		::Il2CppArray<::System::String*>* SpecialWord; // 0x30
		::Il2CppArray<::System::String*>* MidLetter; // 0x38
		::Il2CppArray<::MoleMole::TextTypesetMidChar>* MidChars; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS__CTOR_OFFSET))(this);
		}

		::System::String* get__NotInEndDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__NOTINENDDISPLAY_OFFSET))(this);
		}

		::System::String* get__NotInHeadDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__NOTINHEADDISPLAY_OFFSET))(this);
		}

		::System::String* get__NotInHeadIfAfterTextDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__NOTINHEADIFAFTERTEXTDISPLAY_OFFSET))(this);
		}

		::System::String* get__SpecialWordDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__SPECIALWORDDISPLAY_OFFSET))(this);
		}

		::System::String* get__MidLetterTextDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__MIDLETTERTEXTDISPLAY_OFFSET))(this);
		}

		static ::System::Void Method_1_6AAF54EBA8338F29(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::Enum_3_CBE15F282C7D6943, ::Struct_2_2465FE796254C062>>* a1, ::System::String* a2, ::Enum_3_46FE3E575CBDB25A a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::Enum_3_CBE15F282C7D6943, ::Struct_2_2465FE796254C062>>*, ::System::String*, ::Enum_3_46FE3E575CBDB25A))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_METHOD_1_6AAF54EBA8338F29_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Method_1_FBF0892E6836B37C(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_METHOD_1_FBF0892E6836B37C_OFFSET))(a1);
		}

		static ::System::String* Method_1_C4D597C45DD581DC(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_METHOD_1_C4D597C45DD581DC_OFFSET))(a1);
		}

		static ::System::Void Method_1_01BE963E6AF97FBD(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::Enum_3_CBE15F282C7D6943, ::Struct_2_2465FE796254C062>>* a1, ::System::String* a2, ::Enum_3_CBE15F282C7D6943 a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::Enum_3_CBE15F282C7D6943, ::Struct_2_2465FE796254C062>>*, ::System::String*, ::Enum_3_CBE15F282C7D6943))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_METHOD_1_01BE963E6AF97FBD_OFFSET))(a1, a2, a3);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::Enum_3_CBE15F282C7D6943, ::Struct_2_2465FE796254C062>>* Method_1_CCDD78442FA217D1()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::Enum_3_CBE15F282C7D6943, ::Struct_2_2465FE796254C062>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_METHOD_1_CCDD78442FA217D1_OFFSET))(this);
		}
	};
}
