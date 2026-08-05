#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C8DD384065D32AEE.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FC3A38802015EBBD_METHOD_1_3A1DCB999FD570B7_OFFSET UNITYSDK_OFFSET(0x13479F00)
#define CLASS_1_FC3A38802015EBBD_METHOD_1_5B7D869AB79EC5BF_OFFSET UNITYSDK_OFFSET(0x1347A240)
#define CLASS_1_FC3A38802015EBBD_METHOD_1_AA69EB2A35AC1C8B_OFFSET UNITYSDK_OFFSET(0x1347A030)
#define CLASS_1_FC3A38802015EBBD_METHOD_1_E270CDC98B580598_OFFSET UNITYSDK_OFFSET(0x1347A2C0)
#define CLASS_1_FC3A38802015EBBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1347A2B0)

inline static constexpr unsigned int Class_1_FC3A38802015EBBD_TypeDefinitionIndex = 47611;

class Class_1_FC3A38802015EBBD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC3A38802015EBBD__CTOR_OFFSET))(this);
	}

	::Struct_2_C8DD384065D32AEE Method_1_3A1DCB999FD570B7(::System::Boolean a1)
	{
		return ((::Struct_2_C8DD384065D32AEE(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FC3A38802015EBBD_METHOD_1_3A1DCB999FD570B7_OFFSET))(this, a1);
	}

	::Struct_2_C8DD384065D32AEE Method_1_AA69EB2A35AC1C8B(::System::Object* a1)
	{
		return ((::Struct_2_C8DD384065D32AEE(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FC3A38802015EBBD_METHOD_1_AA69EB2A35AC1C8B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5B7D869AB79EC5BF(::Struct_2_C8DD384065D32AEE& a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_C8DD384065D32AEE&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FC3A38802015EBBD_METHOD_1_5B7D869AB79EC5BF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E270CDC98B580598(::Struct_2_C8DD384065D32AEE& a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_C8DD384065D32AEE&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FC3A38802015EBBD_METHOD_1_E270CDC98B580598_OFFSET))(this, a1, a2);
	}
};
