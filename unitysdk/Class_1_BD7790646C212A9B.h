#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class JigsawItemData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BD7790646C212A9B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x109E8780)
#define CLASS_1_BD7790646C212A9B_METHOD_1_2C5EDE50B6CE7646_OFFSET UNITYSDK_OFFSET(0x109E8B30)
#define CLASS_1_BD7790646C212A9B_METHOD_1_6BDC25DE080C4A8E_OFFSET UNITYSDK_OFFSET(0x109E8E20)
#define CLASS_1_BD7790646C212A9B_METHOD_1_73052712910A9EE7_OFFSET UNITYSDK_OFFSET(0x109E8440)
#define CLASS_1_BD7790646C212A9B_METHOD_1_771CDD36F10EAB9E_OFFSET UNITYSDK_OFFSET(0x109E87E0)
#define CLASS_1_BD7790646C212A9B_METHOD_1_B7F43F3C2CB20088_OFFSET UNITYSDK_OFFSET(0x109E8970)
#define CLASS_1_BD7790646C212A9B__CTOR_OFFSET UNITYSDK_OFFSET(0x109E8330)

inline static constexpr unsigned int Class_1_BD7790646C212A9B_TypeDefinitionIndex = 64097;

class Class_1_BD7790646C212A9B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::Prop::JigsawItemData*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::Prop::JigsawItemData*>*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::Prop::JigsawItemData*>*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD7790646C212A9B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_73052712910A9EE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD7790646C212A9B_METHOD_1_73052712910A9EE7_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD7790646C212A9B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_771CDD36F10EAB9E(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::JigsawItemData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::Prop::JigsawItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_BD7790646C212A9B_METHOD_1_771CDD36F10EAB9E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B7F43F3C2CB20088(::System::UInt32 a1, ::RPG::Client::Prop::JigsawItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + CLASS_1_BD7790646C212A9B_METHOD_1_B7F43F3C2CB20088_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::RPG::Client::Prop::JigsawItemData*>* Method_1_2C5EDE50B6CE7646(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::RPG::Client::Prop::JigsawItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BD7790646C212A9B_METHOD_1_2C5EDE50B6CE7646_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::Client::Prop::JigsawItemData*>* Method_1_6BDC25DE080C4A8E(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::RPG::Client::Prop::JigsawItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BD7790646C212A9B_METHOD_1_6BDC25DE080C4A8E_OFFSET))(this, a1);
	}
};
