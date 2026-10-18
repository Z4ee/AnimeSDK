#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_65F0290E6742FF82.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_E3144EBBA3CB68CA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Object; }

#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0xC299480)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xC29C000)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xC29C970)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_2F541F90F3E6DC64_OFFSET UNITYSDK_OFFSET(0xC29B870)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_3DB987F0FC723C47_OFFSET UNITYSDK_OFFSET(0xC29A440)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_3FAAA518D3F433CC_OFFSET UNITYSDK_OFFSET(0xC29C9D0)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_490B5123E6F6015E_OFFSET UNITYSDK_OFFSET(0xC299470)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0xC29B5B0)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_5B3FA9FDD7D2BA8C_1_OFFSET UNITYSDK_OFFSET(0xC29C330)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_5B3FA9FDD7D2BA8C_OFFSET UNITYSDK_OFFSET(0xC29C630)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_7C8C4221E128333A_OFFSET UNITYSDK_OFFSET(0xC29B820)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_8C050A20324261D4_1_OFFSET UNITYSDK_OFFSET(0xC29D0A0)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_8C050A20324261D4_OFFSET UNITYSDK_OFFSET(0xC29CBD0)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_99535C086763A991_OFFSET UNITYSDK_OFFSET(0xC299E50)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_A4F8ACB7D515AF52_OFFSET UNITYSDK_OFFSET(0xC2995D0)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xC299520)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xC299570)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xC29BFC0)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xC29C930)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC29B7E0)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xC29BE00)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0xC299580)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_FB1C56FCE4ABD259_OFFSET UNITYSDK_OFFSET(0xC29B610)
#define CLASS_2_DF4C2BA5C615A9ED_METHOD_2_FFA8D303318A2DF9_OFFSET UNITYSDK_OFFSET(0xC29C120)
#define CLASS_2_DF4C2BA5C615A9ED__CTOR_OFFSET UNITYSDK_OFFSET(0xC2994D0)

inline static constexpr unsigned int Class_2_DF4C2BA5C615A9ED_TypeDefinitionIndex = 49574;

class Class_2_DF4C2BA5C615A9ED : public ::Class_1_65F0290E6742FF82
{
public:
	static ::System::Boolean* StaticGet_MIDHLHBANDB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_DF4C2BA5C615A9ED_TypeDefinitionIndex)->GetStaticField(0x15BC0);
	}
	::System::Collections::Generic::List_1<::System::Int32>* IAGNMEHODJI; // 0x60
	::System::Collections::Generic::List_1<::System::Int32>* MOIDMEBPDKE; // 0x68
	::System::Collections::Generic::List_1<::System::Int32>* OIBHDOMIGDO; // 0x70
	::Il2CppArray<::UnityEngine::Light*>* JHEBNGLNJJD; // 0x78
	::System::Int32 LCIIEPIBPFJ; // 0x80
	::RPG::CustomRP::CustomLightQualityFilter AJMAPJOPFFP; // 0x84
	::RPG::CustomRP::CustomLightQualityFilter DDEGBOBCNFA; // 0x88
	::RPG::Client::OpenWorld::StreamingLightEnum OCMJCFLLJAB; // 0x8C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::OpenWorld::StreamingLightEnum Method_2_490B5123E6F6015E()
	{
		return ((::RPG::Client::OpenWorld::StreamingLightEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_490B5123E6F6015E_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	static ::System::Void Method_2_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_F8C7231308CD2C82_OFFSET))();
	}

	::System::Void Method_2_A4F8ACB7D515AF52(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_A4F8ACB7D515AF52_OFFSET))(this, a1);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_FB1C56FCE4ABD259(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_FB1C56FCE4ABD259_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_7C8C4221E128333A(::UnityEngine::Object* a1, ::RPG::Client::OpenWorld::StreamingLightEnum a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_7C8C4221E128333A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2F541F90F3E6DC64(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_2F541F90F3E6DC64_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_3DB987F0FC723C47(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_3DB987F0FC723C47_OFFSET))(this, a1);
	}

	::System::Void Method_2_FFA8D303318A2DF9(::Class_1_E3144EBBA3CB68CA* a1, ::RPG::Client::OpenWorld::StreamingLightEnum& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3144EBBA3CB68CA*, ::RPG::Client::OpenWorld::StreamingLightEnum&))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_FFA8D303318A2DF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5B3FA9FDD7D2BA8C(::System::Int32 a1, ::System::String* a2, ::Class_1_E3144EBBA3CB68CA* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Class_1_E3144EBBA3CB68CA*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_5B3FA9FDD7D2BA8C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_5B3FA9FDD7D2BA8C_1(::System::Int32 a1, ::System::String* a2, ::Class_1_E3144EBBA3CB68CA* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Class_1_E3144EBBA3CB68CA*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_5B3FA9FDD7D2BA8C_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_3FAAA518D3F433CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_3FAAA518D3F433CC_OFFSET))(this);
	}

	::UnityEngine::Light* Method_2_8C050A20324261D4(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_8C050A20324261D4_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_2_8C050A20324261D4_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_8C050A20324261D4_1_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_99535C086763A991(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DF4C2BA5C615A9ED_METHOD_2_99535C086763A991_OFFSET))(a1);
	}
};
