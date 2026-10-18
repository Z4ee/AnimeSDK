#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_242BFB9DE152D766;
class Class_1_3D681D77B5CD1A06;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_7F8437B064FFBB24_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154BA8B0)
#define CLASS_2_7F8437B064FFBB24_INIT_OFFSET UNITYSDK_OFFSET(0x154BA860)
#define CLASS_2_7F8437B064FFBB24_METHOD_2_71C776EB7CFC7110_OFFSET UNITYSDK_OFFSET(0x154BA900)
#define CLASS_2_7F8437B064FFBB24_METHOD_2_AFF78E9477630E0C_OFFSET UNITYSDK_OFFSET(0x154BAB40)
#define CLASS_2_7F8437B064FFBB24_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x154BAC10)
#define CLASS_2_7F8437B064FFBB24__CTOR_OFFSET UNITYSDK_OFFSET(0x154BAC50)

inline static constexpr unsigned int Class_2_7F8437B064FFBB24_TypeDefinitionIndex = 62882;

class Class_2_7F8437B064FFBB24 : public ::RPG::Client::BaseModule
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_242BFB9DE152D766*>* JOIHGPDOPCF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8437B064FFBB24__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8437B064FFBB24_INIT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8437B064FFBB24_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_71C776EB7CFC7110(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3D681D77B5CD1A06*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3D681D77B5CD1A06*>*))((::PBYTE)hIl2Cpp + CLASS_2_7F8437B064FFBB24_METHOD_2_71C776EB7CFC7110_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AFF78E9477630E0C(::System::UInt32 a1, ::Class_1_242BFB9DE152D766*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_242BFB9DE152D766*&))((::PBYTE)hIl2Cpp + CLASS_2_7F8437B064FFBB24_METHOD_2_AFF78E9477630E0C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8437B064FFBB24_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
