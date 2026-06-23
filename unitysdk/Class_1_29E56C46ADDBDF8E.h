#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4ED21A115C97704D;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class String; }

#define CLASS_1_29E56C46ADDBDF8E_METHOD_1_05523869C460FA5A_OFFSET UNITYSDK_OFFSET(0x17746CD0)
#define CLASS_1_29E56C46ADDBDF8E_METHOD_1_58219B932333F30A_OFFSET UNITYSDK_OFFSET(0x17746DA0)
#define CLASS_1_29E56C46ADDBDF8E_METHOD_1_F7A23EAEAD2A3D79_OFFSET UNITYSDK_OFFSET(0x17746B20)
#define CLASS_1_29E56C46ADDBDF8E_METHOD_1_FA1393B359A9F162_OFFSET UNITYSDK_OFFSET(0x17746C00)

inline static constexpr unsigned int Class_1_29E56C46ADDBDF8E_TypeDefinitionIndex = 71223;

class Class_1_29E56C46ADDBDF8E : public ::System::Object
{
public:
	static ::MoleMole::Config::DynamicString* Method_1_F7A23EAEAD2A3D79(::MoleMole::Config::DynamicString* a1, ::System::String* a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::MoleMole::Config::DynamicString*(*)(::MoleMole::Config::DynamicString*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_29E56C46ADDBDF8E_METHOD_1_F7A23EAEAD2A3D79_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_4ED21A115C97704D* Method_1_FA1393B359A9F162(::Class_1_4ED21A115C97704D* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::Class_1_4ED21A115C97704D*(*)(::Class_1_4ED21A115C97704D*, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_29E56C46ADDBDF8E_METHOD_1_FA1393B359A9F162_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::DynamicInt* Method_1_05523869C460FA5A(::MoleMole::Config::DynamicInt* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::MoleMole::Config::DynamicInt*(*)(::MoleMole::Config::DynamicInt*, ::System::Int32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_29E56C46ADDBDF8E_METHOD_1_05523869C460FA5A_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::DynamicFloat* Method_1_58219B932333F30A(::MoleMole::Config::DynamicFloat* a1, ::System::Single a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::MoleMole::Config::DynamicFloat*(*)(::MoleMole::Config::DynamicFloat*, ::System::Single, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_29E56C46ADDBDF8E_METHOD_1_58219B932333F30A_OFFSET))(a1, a2, a3, a4);
	}
};
