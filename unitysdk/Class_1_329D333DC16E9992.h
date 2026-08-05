#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0C791B68CB2A5BF5;
class Class_1_3D219FE0BE635557;
namespace MoleMole { class TextureSheetData; }
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_329D333DC16E9992_METHOD_1_5B18B2C871381E55_OFFSET UNITYSDK_OFFSET(0x155E6700)
#define CLASS_1_329D333DC16E9992_METHOD_1_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x155E6A20)
#define CLASS_1_329D333DC16E9992_METHOD_1_9B021D6274FDC892_OFFSET UNITYSDK_OFFSET(0x155E68B0)
#define CLASS_1_329D333DC16E9992_METHOD_1_F433929C8572B123_OFFSET UNITYSDK_OFFSET(0x155E6D10)
#define CLASS_1_329D333DC16E9992_METHOD_1_F9555880FBE027D5_OFFSET UNITYSDK_OFFSET(0x155E6B70)
#define CLASS_1_329D333DC16E9992__CTOR_OFFSET UNITYSDK_OFFSET(0x155E66F0)

inline static constexpr unsigned int Class_1_329D333DC16E9992_TypeDefinitionIndex = 77801;

class Class_1_329D333DC16E9992 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_3D219FE0BE635557*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_329D333DC16E9992__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5B18B2C871381E55(::MoleMole::TextureSheetData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetData*))((::PBYTE)hIl2Cpp + CLASS_1_329D333DC16E9992_METHOD_1_5B18B2C871381E55_OFFSET))(this, a1);
	}

	::System::Void Method_1_9B021D6274FDC892(::Class_1_0C791B68CB2A5BF5* a1, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* a2, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0C791B68CB2A5BF5*, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_329D333DC16E9992_METHOD_1_9B021D6274FDC892_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_329D333DC16E9992_METHOD_1_6BB86695870EFBD1_OFFSET))(this);
	}

	::System::Void Method_1_F9555880FBE027D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_329D333DC16E9992_METHOD_1_F9555880FBE027D5_OFFSET))(this);
	}

	::System::Void Method_1_F433929C8572B123(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_329D333DC16E9992_METHOD_1_F433929C8572B123_OFFSET))(this, a1);
	}
};
