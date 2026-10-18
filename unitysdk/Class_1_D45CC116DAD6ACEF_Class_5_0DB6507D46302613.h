#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace Newtonsoft::Json { class JsonTextWriter; }
namespace Newtonsoft::Json::Linq { class JObject; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613_BEGIN_OFFSET UNITYSDK_OFFSET(0x1565C930)
#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1565C8C0)
#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613_METHOD_5_52749983B143EDBD_OFFSET UNITYSDK_OFFSET(0x1565F200)
#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x1565EEC0)
#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613_METHOD_5_C3AA1A71B8C6CE2F_1_OFFSET UNITYSDK_OFFSET(0x1565EFF0)
#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613_METHOD_5_C3AA1A71B8C6CE2F_OFFSET UNITYSDK_OFFSET(0x1565EF50)
#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613_ONGUI_OFFSET UNITYSDK_OFFSET(0x1565F090)
#define CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__CTOR_OFFSET UNITYSDK_OFFSET(0x1565F5D0)

inline static constexpr unsigned int Class_1_D45CC116DAD6ACEF_Class_5_0DB6507D46302613_TypeDefinitionIndex = 72754;

class Class_1_D45CC116DAD6ACEF_Class_5_0DB6507D46302613 : public ::UnityEngine::MonoBehaviour
{
public:
	::Newtonsoft::Json::Linq::JObject* MJECNGGELFK; // 0x18
	::System::String* CEKHDBPOJHO; // 0x20
	::System::Int32 JGGDJHJHLDI; // 0x28
	::System::Int32 NCLILBPNMNN; // 0x2C
	::System::Int32 PCENCBLCPAE; // 0x30
	::System::Boolean JKPCEJLLGDH; // 0x34
	::System::String* MFHKDHFJAHE; // 0x38
	::UnityEngine::Rect EPDMOKHFKHG; // 0x40
	::System::Boolean IMEEDAPLPLM; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613__CTOR_OFFSET))(this);
	}

	::System::Void Initialize(::Newtonsoft::Json::Linq::JObject* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JObject*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613_INITIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Begin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613_BEGIN_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_5_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613_METHOD_5_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_5_C3AA1A71B8C6CE2F(::Newtonsoft::Json::JsonTextWriter* a1, ::Newtonsoft::Json::Linq::JObject* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::Newtonsoft::Json::JsonTextWriter*, ::Newtonsoft::Json::Linq::JObject*))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613_METHOD_5_C3AA1A71B8C6CE2F_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerator* Method_5_C3AA1A71B8C6CE2F_1(::Newtonsoft::Json::JsonTextWriter* a1, ::Newtonsoft::Json::Linq::JObject* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::Newtonsoft::Json::JsonTextWriter*, ::Newtonsoft::Json::Linq::JObject*))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613_METHOD_5_C3AA1A71B8C6CE2F_1_OFFSET))(this, a1, a2);
	}

	::System::Void OnGUI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613_ONGUI_OFFSET))(this);
	}

	::System::Void Method_5_52749983B143EDBD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D45CC116DAD6ACEF_CLASS_5_0DB6507D46302613_METHOD_5_52749983B143EDBD_OFFSET))(this, a1);
	}
};
