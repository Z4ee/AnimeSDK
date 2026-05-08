#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D7E802D2192B688B.h"
#include "unitysdk/System/Object.h"

class Class_1_A312CF7E24F3D126;
class Class_1_FD893FD36F6A3A6D_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AF9B620953572621_METHOD_1_01C504FCECDF1A71_OFFSET UNITYSDK_OFFSET(0x14021770)
#define CLASS_1_AF9B620953572621_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x14021760)
#define CLASS_1_AF9B620953572621_METHOD_1_602A336CBD30C930_OFFSET UNITYSDK_OFFSET(0x14021920)
#define CLASS_1_AF9B620953572621_METHOD_1_A70784E011AF5C0D_OFFSET UNITYSDK_OFFSET(0x14021790)
#define CLASS_1_AF9B620953572621_METHOD_1_AD6A7E425B281156_OFFSET UNITYSDK_OFFSET(0x14021910)
#define CLASS_1_AF9B620953572621__CTOR_OFFSET UNITYSDK_OFFSET(0x14021780)

inline static constexpr unsigned int Class_1_AF9B620953572621_TypeDefinitionIndex = 54932;

class Class_1_AF9B620953572621 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_FD893FD36F6A3A6D_1*>* Field_1_1; // 0x10
	::Struct_2_D7E802D2192B688B Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF9B620953572621__CTOR_OFFSET))(this);
	}

	::Struct_2_D7E802D2192B688B Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_D7E802D2192B688B(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF9B620953572621_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_FD893FD36F6A3A6D_1*>* Method_1_01C504FCECDF1A71()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_FD893FD36F6A3A6D_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF9B620953572621_METHOD_1_01C504FCECDF1A71_OFFSET))(this);
	}

	::Class_1_AF9B620953572621* Method_1_A70784E011AF5C0D(::Class_1_A312CF7E24F3D126* a1)
	{
		return ((::Class_1_AF9B620953572621*(*)(::PVOID, ::Class_1_A312CF7E24F3D126*))((::PBYTE)hIl2Cpp + CLASS_1_AF9B620953572621_METHOD_1_A70784E011AF5C0D_OFFSET))(this, a1);
	}

	::System::Void Method_1_AD6A7E425B281156(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_FD893FD36F6A3A6D_1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_FD893FD36F6A3A6D_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_AF9B620953572621_METHOD_1_AD6A7E425B281156_OFFSET))(this, a1);
	}

	::System::Void Method_1_602A336CBD30C930(::Struct_2_D7E802D2192B688B a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D7E802D2192B688B))((::PBYTE)hIl2Cpp + CLASS_1_AF9B620953572621_METHOD_1_602A336CBD30C930_OFFSET))(this, a1);
	}
};
